#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int in = 0;
int out = 0;

sem_t empty;
sem_t full;
pthread_mutex_t mutex;

void *producer(void *arg) {
    int item;

    while (1) {
        item = rand() % 100; // produce item

        sem_wait(&empty); // wait for an empty slot
        pthread_mutex_lock(&mutex); // acquire mutex lock

        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;

        pthread_mutex_unlock(&mutex); // release mutex lock
        sem_post(&full); // signal that buffer is full

        printf("Produced item %d\n", item);
    }
}

void *consumer(void *arg) {
    int item;

    while (1) {
        sem_wait(&full); // wait for a full slot
        pthread_mutex_lock(&mutex); // acquire mutex lock

        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;

        pthread_mutex_unlock(&mutex); // release mutex lock
        sem_post(&empty); // signal that buffer is empty

        printf("Consumed item %d\n", item);
    }
}

int main() {
    pthread_t prod_tid, cons_tid;

    sem_init(&empty, 0, BUFFER_SIZE); // initialize empty semaphore to BUFFER_SIZE
    sem_init(&full, 0, 0); // initialize full semaphore to 0
    pthread_mutex_init(&mutex, NULL); // initialize mutex lock

    pthread_create(&prod_tid, NULL, producer, NULL);
    pthread_create(&cons_tid, NULL, consumer, NULL);

    pthread_join(prod_tid, NULL);
    pthread_join(cons_tid, NULL);

    return 0;
}
