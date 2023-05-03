#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <omp.h>

#define MAX_THREADS 3

bool check_sorted(int list[], int s, int n) 
{
    for(int i = s; i < n - 1 ; i++) 
    {
        if(list[i] > list[i + 1])
            return false;
    }
    return true;
}

void merge(int arr[], int l, int m, int r) 
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r) 
{
    if (l < r) {
        int m = l + (r - l) / 2;

        #pragma omp parallel sections num_threads(2)
        {
            #pragma omp section
            merge_sort(arr, l, m);

            #pragma omp section
            merge_sort(arr, m+1, r);
        }

        merge(arr, l, m, r);
    }
}

int main(int argc, char* argv[]) 
{
    srand(time(NULL));
    int arr[8];

    for(int i = 0; i < 8; i++)
        arr[i] = rand() % 100;

    printf("Unsorted array:\n");
    for(int i = 0; i < 8; i++)
        printf("%d ", arr[i]);
    printf("\n");

    #pragma omp parallel num_threads(MAX_THREADS)
    {
        #pragma omp single nowait
        merge_sort(arr, 0, 7);
    }

    printf("Sorted array:\n");
    for(int i = 0; i < 8; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
