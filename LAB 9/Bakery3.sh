#!/bin/bash

for THREAD_COUNT in {20..100..10}
do
    echo "Running for $THREAD_COUNT threads"
    gcc bakery_spin.c -pthread -o bakery_spin
    ./bakery_spin $THREAD_COUNT
    gcc bakery_semaphore.c -pthread -o bakery_semaphore
    ./bakery_semaphore $THREAD_COUNT
done
