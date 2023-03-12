# LAB 6  INTER PROCESS COMMUNICATION

# TASK 1:  SHARED MEMORY
PRODUCER.c
![image](https://user-images.githubusercontent.com/123716596/224354589-ac415913-bf04-4786-8d76-0db32d4e06b4.png)
CONSUMER.c
![image](https://user-images.githubusercontent.com/123716596/224354796-b8132564-9914-4f2e-8c18-66af9f93af18.png)

![Screenshot from 2023-03-08 10-21-33](https://user-images.githubusercontent.com/123716596/223626462-6d9cb67c-a918-4aba-b013-d810a8f3f684.png)

# size 2^18  262144
![Screenshot from 2023-03-08 10-52-44](https://user-images.githubusercontent.com/123716596/223630803-99f7d18e-56b5-4d9a-bd2e-402f94592504.png)

![Screenshot from 2023-03-08 10-53-17](https://user-images.githubusercontent.com/123716596/223630813-7208dffd-3502-485a-b8e8-572923baacd8.png)
![Screenshot from 2023-03-08 10-53-45](https://user-images.githubusercontent.com/123716596/223630823-20d89f0f-eff5-4c29-847a-a0d4b81a5a70.png)

![Screenshot from 2023-03-08 10-54-00](https://user-images.githubusercontent.com/123716596/223630827-602ee2fa-b3a6-4a18-9c2f-c0a74f2aeaf2.png)

# TASK 2: PIPES IN LINUX

NAMED PIPES

UN NAMED PIPES

# TASK 3: 

Write 2 C programs named prod.c and cons.c. 
1. prod.c will create a shared memory and generate 2^18 random numbers in it. (You must decide the size of the shared memory now.)
2. prod.c will start 2 cons.c prog and assign left half of the shared memory to one and right side to the other. (You must use some other IPC like message passing or pipes to communicate this.)
3. These 2 cons.c programs will in turn create 2 more cons.c prog and again assign the left half of their assigned memory to one and right half to the other. This must continue to happen until the cons.c prog receives half with only 16 numbers. It must then sort these 16 numbers and inform its parent.
4. Parent upon confirmation from both children must sort its half (use merge sort technique)
5. The prod.c will finally receive answer from its 2 cons.c programs sorts them and prints the sorted array.
