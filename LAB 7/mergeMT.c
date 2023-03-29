#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX_SIZE 1000000

int arr[MAX_SIZE];
int tmp[MAX_SIZE];
int num_threads;

typedef struct 
{
    int l;
    int r;
} range_t;

void *merge_sort(void *args) 
{
    range_t *range = (range_t *)args;
    int l = range->l;
    int r = range->r;
    if (l >= r) 
    {
        return NULL;
    }
    int m = l + (r - l) / 2;
    pthread_t t1, t2;
    range_t range1 = {l, m};
    range_t range2 = {m+1, r};
    pthread_create(&t1, NULL, merge_sort, &range1);
    pthread_create(&t2, NULL, merge_sort, &range2);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    int i = l;
    int j = m + 1;
    int k = 0;
    while (i <= m && j <= r) 
    {
        if (arr[i] < arr[j]) 
        {
            tmp[k++] = arr[i++];
        } else 
        {
            tmp[k++] = arr[j++];
        }
    }
    while (i <= m) 
    {
        tmp[k++] = arr[i++];
    }
    while (j <= r) 
    {
        tmp[k++] = arr[j++];
    }
    for (i = 0; i < k; i++) 
    {
        arr[l+i] = tmp[i];
    }
    return NULL;
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of threads: ");
    scanf("%d", &num_threads);
    pthread_t t;
    range_t range = {0, n-1};
    pthread_create(&t, NULL, merge_sort, &range);
    pthread_join(t, NULL);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
