#include<semaphore.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
sem_t mutex,rw_mutex;
pthread_t tid;
pthread_t writerthreads[100],readerthreads[100];
int readercount = 0;

void *reader(void* param)
{
    sem_wait(&mutex);
    readercount++;
    if(readercount==1)
        sem_wait(&rw_mutex);
    sem_post(&mutex);
    printf("%d reader is inside\n",readercount);
    usleep(3);
    sem_wait(&mutex);
    readercount--;
    if(readercount==0)
    {
        sem_post(&rw_mutex);
    }
    sem_post(&mutex);
    printf("%d Reader is leaving\n",readercount+1);
    return NULL;
}

void *writer(void* param)
{
    printf("Writer is trying to enter\n");
    sem_wait(&rw_mutex);
    printf("Writer has entered\n");
    sem_post(&rw_mutex);
    printf("Writer is leaving\n");
    return NULL;
}

int main()
{
    int n2,i;
    printf("Enter the number of readers:");
    scanf("%d",&n2);
    printf("\n");
    int n1[n2];
    sem_init(&mutex,0,1);
    sem_init(&rw_mutex,0,1);
    for(i=0;i<n2;i++)
    {
        pthread_create(&writerthreads[i],NULL,reader,NULL);
        pthread_create(&readerthreads[i],NULL,writer,NULL);
    }
    for(i=0;i<n2;i++)
    {
        pthread_join(writerthreads[i],NULL);
        pthread_join(readerthreads[i],NULL);
    }

}

