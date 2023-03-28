#include <stdio.h>
#include <pthread.h>

int x = 0;  // shared variable

void *inc_thread(void *arg)
{
    x++;  // increment shared variable
    printf("Increment thread: x = %d\n", x);
    pthread_exit(NULL);
}

void *dec_thread(void *arg)
{
    x--;  // decrement shared variable
    printf("Decrement thread: x = %d\n", x);
    pthread_exit(NULL);
}

int main()
{
    pthread_t t1, t2;

    // create threads
    pthread_create(&t1, NULL, inc_thread, NULL);
    pthread_create(&t2, NULL, dec_thread, NULL);

    // wait for threads to complete
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
	printf("Shared variable value is: %d\n", x);

    return 0;
}
