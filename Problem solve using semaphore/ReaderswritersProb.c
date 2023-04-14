#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define READERS 5
#define WRITERS 2

sem_t mutex;
sem_t rw_mutex;
int read_count = 0;

void *reader(void *arg) {
    int thread_num = *(int*)arg;

    while (1) {
        sem_wait(&mutex);
        read_count++;
        if (read_count == 1) {
            sem_wait(&rw_mutex);
        }
        sem_post(&mutex);

        printf("Reader %d is reading\n", thread_num);

        sem_wait(&mutex);
        read_count--;
        if (read_count == 0) {
            sem_post(&rw_mutex);
        }
        sem_post(&mutex);

        // Reading done
        sleep(rand() % 3);
    }
}

void *writer(void *arg) {
    int thread_num = *(int*)arg;

    while (1) {
        sem_wait(&rw_mutex);

        printf("Writer %d is writing\n", thread_num);

        sem_post(&rw_mutex);

        // Writing done
        sleep(rand() % 3);
    }
}

int main() {
    pthread_t reader_tids[READERS];
    pthread_t writer_tids[WRITERS];

    sem_init(&mutex, 0, 1);
    sem_init(&rw_mutex, 0, 1);

    int i;
    for (i = 0; i < READERS; i++) {
        pthread_create(&reader_tids[i], NULL, reader, (void*)&i);
    }

    for (i = 0; i < WRITERS; i++) {
        pthread_create(&writer_tids[i], NULL, writer, (void*)&i);
    }

    for (i = 0; i < READERS; i++) {
        pthread_join(reader_tids[i], NULL);
    }

    for (i = 0; i < WRITERS; i++) {
        pthread_join(writer_tids[i], NULL);
    }

    sem_destroy(&mutex);
    sem_destroy(&rw_mutex);

    return 0;
}
