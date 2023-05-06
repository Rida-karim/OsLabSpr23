# Q1:
 Write a program that creates two processes, a producer and a consumer, that share a common buffer.
The producer generates random numbers and stores them in the buffer, while the consumer retrieves the
numbers from the buffer and prints them on the screen. Use semaphores to ensure mutual exclusion and
synchronization.

# Q2. 
 Two processes are simultaneously accessing a shared resource (e.g. a printer) and both want to use it
at the same time. To prevent data corruption, you need to implement mutual exclusion.

# Q3. 
 Write a program that creates two processes are working on the same file and both want to write to it.
To prevent race conditions, you need to implement file locking

# Q4. 
 Two processes are communicating with each other through a shared memory segment. To prevent data
corruption, you need to implement synchronization using a binary semaphore.
# Q5. 
 Three processes are accessing a shared resource (e.g. a database) and one process is updating the
resource while the other two processes are reading from it. To prevent the reading processes from accessing
incomplete data, you need to implement reader-writer locks.
