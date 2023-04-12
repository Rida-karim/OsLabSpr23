#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>

#define THREAD_COUNT 50

sem_t mutex;
sem_t* entering;
int* ticket_number;
int* choosing;

void* thread_func(void* thread_id) {
    int id = *(int*)thread_id;
    int i;
    for (i = 0; i < 5; i++) {
        // Entry section
        sem_wait(&mutex);
        choosing[id] = 1;
        int max_ticket = 0;
        int j;
        for (j = 0; j < THREAD_COUNT; j++) {
            if (ticket_number[j] > max_ticket) {
                max_ticket = ticket_number[j];
            }
        }
        ticket_number[id] = max_ticket + 1;
        choosing[id] = 0;
        sem_post(&mutex);

        // Critical section
        int k;
        for (k = 0; k < 1000000; k++); // Simulating some work
        printf("Thread %d entered the critical section.\n", id);

        // Exit section
        int l;
        for (l = 0; l < THREAD_COUNT; l++) {
            while (choosing[l]); // Spin lock
            while (ticket_number[l] != 0 && (ticket_number[l] < ticket_number[id] || (ticket_number[l] == ticket_number[id] && l < id))); // Spin lock
        }
        printf("Thread %d exited the critical section.\n", id);
        ticket_number[id] = 0;
    }
    pthread_exit(NULL);
}

int main() {
    clock_t start, end;
    double cpu_time_used;
    pthread_t threads[THREAD_COUNT];
    int thread_ids[THREAD_COUNT];
    entering = (sem_t*)malloc(sizeof(sem_t) * THREAD_COUNT);
    ticket_number = (int*)malloc(sizeof(int) * THREAD_COUNT);
    choosing = (int*)malloc(sizeof(int) * THREAD_COUNT);
    sem_init(&mutex, 0, 1);
    int i;
    for (i = 0; i < THREAD_COUNT; i++) {
        sem_init(&entering[i], 0, 0);
        ticket_number[i] = 0;
        choosing[i] = 0;
        thread_ids[i] = i;
    }
    start = clock();
    for (i = 0; i < THREAD_COUNT; i++) {
        pthread_create(&threads[i], NULL, thread_func, &thread_ids[i]);
    }
    for (i = 0; i < THREAD_COUNT; i++) {
        pthread_join(threads[i], NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", cpu_time_used);
    sem_destroy(&mutex);
    for (i = 0; i < THREAD_COUNT; i++) {
        sem_destroy(&entering[i]);
    }
    free(entering);
    free(ticket_number);
    free(choosing);
    return 0;
}
