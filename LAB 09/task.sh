#!/bin/bash

gcc -o Task -pthread Task.c

threads=$1
{ time ./Task $threads; } 2> runtime.txt
rm Task
