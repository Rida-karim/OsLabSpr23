# ASSIGNMENT 2

# TASK 1:
Q1. Developing a program that needs to read data from multiple files simultaneously. How would you use
pthread to implement this?
You can create a separate thread for each file that needs to be read simultaneously. Each thread will have
its own file pointer and will read data from the file in parallel with the other threads. You can use
pthread_create() function to create each thread and pass the file name as an argument to the thread function.
Each thread will then use the file name to open the file and read data from it.
• Buffer size is idC.
• Number of files are idA.

![image](https://user-images.githubusercontent.com/123716596/229280469-faa099a3-739f-4704-94bb-0b9d683a1f3a.png)
![image](https://user-images.githubusercontent.com/123716596/229280482-8b213985-d58a-4fb1-bcc5-87e167c18b86.png)


# TASK 2:
Q2. Suppose you are building a chat application that requires multiple clients to connect to a server and
send messages to each other. Implement this using pthread?
You can create a separate thread for each client that connects to the server. Each thread will handle the
communication with the client, sending and receiving messages. You can use pthread_create() function to
create a thread for each client and pass the client socket as an argument to the thread function. The thread
function will then use the socket to send and receive messages to/from the client.
• Buffer size is idC.
• Number of clients are idB.
• Number of sockets are (idA+idB).

![image](https://user-images.githubusercontent.com/123716596/229280582-c67d0bce-cbc0-45a4-b16b-dde4e4f2ab9a.png)
![image](https://user-images.githubusercontent.com/123716596/229280599-b594ebc5-c7cd-4508-a008-036156eda1b8.png)
![image](https://user-images.githubusercontent.com/123716596/229280619-a47bbe5e-a7e4-4269-9453-6afb61177f67.png)

Q3. In question 3, you are required to answer only two questions. Students with an odd ID can only solve
the question with an odd number, while students with an even ID can only solve the question with an even
number.
i. Suppose a company has a server that processes a large number of requests from users (idC
process). The server has multiple processes that handle different types of requests. However,
due to the high volume of requests, the server's CPU usage is constantly at 100%, causing slow
response times for users. To improve the server's performance, the company decides to
implement a Round Robin scheduling algorithm to ensure that each process gets a fair share of

the CPU time. The company sets a time quantum of idA seconds and assigns priorities to the
processes based on their importance. The Round Robin algorithm works by giving each
process a time slice of idA seconds to run, and then switching to the next process in the queue.
If a process completes its work within the time slice, it is removed from the queue. If it has
more work to do, it is added back to the end of the queue. Implement it using c or c++.

![image](https://user-images.githubusercontent.com/123716596/229280692-d9b73dc3-9cff-4290-98b9-5cf33b5a0383.png)
![image](https://user-images.githubusercontent.com/123716596/229280706-56a58d0e-fec0-42d9-9715-acc059826543.png)

ii. You are the supervisor of a factory that produces electronic devices. The factory has multiple
production lines (idA), and each line can produce multiple types of devices(idB). Describe how
you could use the SJF preemptive scheduling algorithm to ensure that the devices are
manufactured in the shortest possible time.
![image](https://user-images.githubusercontent.com/123716596/229280940-14b65990-58a4-4e64-8837-40955d157e68.png)


iii. Imagine you are the manager of a pizza restaurant with a single oven. The oven can only bake
one pizza at a time. Describe how you could use the SJF non-preemptive scheduling algorithm
to ensure that the pizzas are baked in the shortest possible time. Total number of pizzas (idA*5).
iv. A hospital is using a priority scheduling algorithm to manage its emergency department.
![image](https://user-images.githubusercontent.com/123716596/229280802-817d2937-210c-46ec-8a1c-9efbed8f0c9e.png)
Patients are assigned a priority level based on the severity of their condition, with higher
priority levels indicating more urgent cases. The hospital has three levels of priority: critical
(idA), urgent (idB), and non-urgent (idA+idB). Patients are seen by a doctor in order of priority,
with critical cases taking precedence over urgent cases, and urgent cases taking precedence
over non-urgent cases.
![image](https://user-images.githubusercontent.com/123716596/229280880-09d2e43e-7c49-434c-bb4d-35b7131cf4a7.png)

![image](https://user-images.githubusercontent.com/123716596/229280833-d718fa00-bd22-46fe-a5e1-274b664f34aa.png)

![image](https://user-images.githubusercontent.com/123716596/229280773-31d73b50-1c40-40bb-85b2-8e3b91180231.png)
