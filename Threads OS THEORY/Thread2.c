#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 2
#define NUM_ITERATIONS 10000

int shared_variable = 0;

void *inc_func(void *arg) 
{
	int i;
	for (i = 0; i < NUM_ITERATIONS; i++) 
        {
		shared_variable++;
	}
	return NULL;
}
void *dec_func(void *arg) 
{
	int i;
	for (i = 0; i < NUM_ITERATIONS; i++) 
        {
		shared_variable--;
	}
	return NULL;
}

int main() 
{
	pthread_t threads[NUM_THREADS];
	int i;
	for (i = 0; i < NUM_THREADS; i++) 
        {
		if (i == 0) 
                {
			pthread_create(&threads[i], NULL, inc_func, NULL);
		} else 
                {
			pthread_create(&threads[i], NULL, dec_func, NULL);
		}
	}
	for (i = 0; i < NUM_THREADS; i++) 
        {
		pthread_join(threads[i], NULL);
	}
	printf("Shared variable value is: %d\n", shared_variable);
	return 0;
}
