# FINAL PPR
# Q1:
Q4, Pthreads and Mutex Locks
There are 4 airline agents, numbered 1,2, 3, and 4, and 150 seats remaining. The agents generate ticket numbers by.
taking turns based on their parity, where even agents generate tickets with odd numbers and odd agents generate
with even' numnbers. Each agent can allocate only one scat at a time. Write a multithreadcd C program that
simulates this scenario using mutex locks to avoid conflicts betwcen threads accessing the shared data.

	

![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/1dce2e1c-8aa7-4d95-a010-9cf04fb1e7a4)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/e33d8ad2-f99f-48f5-a9ac-fae42eec178c)

OUTPUT:
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/e5856c7b-911e-41cc-bd3f-75219f9bd504)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/96505ce3-9402-4c5e-9816-aebb012273b9)


# Q2:
Q5. Open MP witih Signals

YOu are working on a program that utilizes OpenMP to sort a large array of integers in parallel. The program allows
the user to provide the size of the array and specifies the number of threads to use for the sorting process. Howeve
you want to enhance the program by allowing the user to terminate the sorting operation gracefülly by sending
specific signal so here is the process.


Write a code in C programn that takes an array (any size greater than 10 elements and it should be unsorted) and sort
t IS using any sorting algorithm (except bubble sort), When a SIGOUIT signal is passed the program should halt the
sorting and display the array in its curent state. After displaying the program should ask the user to continue sorting
the array or quit the application if said sort the program should resume to sort until the sorted array is displaycd and
if not close the application.
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/a7711bf3-5555-4847-898d-4c0b7729f5e5)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/196e7272-d841-47e1-b95b-e3f1a27da6bc)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/3cdfdcab-e91c-481b-9841-0c1c774fd534)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/612c68b1-7042-415a-abcf-a179e9c5be0e)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/86a711eb-e2d5-40db-9394-ec1d5a908f30)
OUTPUT:
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/f03c0e89-bffd-4277-8bf1-74fc1f638829)

# Q3:
Q6. Process Synchronization
There are two developers in a tcam - ajunior and a senior developer. The senior developer is responsiblc for assigning
tasks to the junior developer and guiding them throughout the development process.
The junior developer waits for the senior developer to assign them a task, and once they receive it, they complctc it
and then wait for the next task. The senior developer, on the other hand, first spends somc time analyzing thc projcct
requiremnents and then assigns tasks to the junior developer. After the junior developer completes the task, the senior
developer checks it and provides feedback before assigning the next task. If the senior developer is unable to respond in time, the junior developer becomes frustrated and seeks assistance from other team members.
This process repeats until th: project is completed, after which both developers move on to other projects. Write a C-
code for the given scenario using pthreads and semaphores.


![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/3a7b1e63-b920-4870-a59f-56e99258ca99)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/e65116cc-9c93-4f6f-ab1a-c078ebf82a28)
![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/d15d6e88-ee8f-4291-b891-5671a9d725f0)
OUTPUT:

![image](https://github.com/Rida-karim/OsLabSpr23/assets/123716596/80d41c4d-3a8d-4649-ae19-0cb53d492699)
