#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#define NUM_PHILOSOPHERS 5

// Initialize semaphores
sem_t forks[NUM_PHILOSOPHERS];

// Define philosopher function
void *philosopher(void *arg) {
    int id = *(int*) arg;
    int left_fork = id;
    int right_fork = (id + 1) % NUM_PHILOSOPHERS;
    while (1) {
        // Think for a while
        printf("Philosopher %d is thinking...\n", id);
        usleep(1000000);
        // Acquire left fork
        sem_wait(&forks[left_fork]);
        printf("Philosopher %d has picked up the left fork.\n", id);
        // Acquire right fork
        sem_wait(&forks[right_fork]);
        printf("Philosopher %d has picked up the right fork and is eating.\n", id);
        // Eat for a while
        usleep(1000000);
        printf("Philosopher %d is done eating.\n", id);
        // Release both forks
        sem_post(&forks[right_fork]);
        printf("Philosopher %d has put down the right fork.\n", id);
        sem_post(&forks[left_fork]);
        printf("Philosopher %d has put down the left fork.\n", id);
    }
}

int main() {
    // Initialize semaphores
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        sem_init(&forks[i], 0, 1);
    }
    // Create philosopher threads
    pthread_t philosophers[NUM_PHILOSOPHERS];
    int ids[NUM_PHILOSOPHERS];
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        ids[i] = i;
        pthread_create(&philosophers[i], NULL, philosopher, &ids[i]);
    }
    // Wait for philosopher threads to finish
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        pthread_join(philosophers[i], NULL);
    }
    // Destroy semaphores
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) {
        sem_destroy(&forks[i]);
    }
    return 0;
}
