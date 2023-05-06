# Q1:
 Write a program that creates two processes, a producer and a consumer, that share a common buffer.
The producer generates random numbers and stores them in the buffer, while the consumer retrieves the
numbers from the buffer and prints them on the screen. Use semaphores to ensure mutual exclusion and
synchronization.
![image](https://user-images.githubusercontent.com/123716596/236624760-e03122ac-7f2b-4062-9270-178c49da32f0.png)
![image](https://user-images.githubusercontent.com/123716596/236624856-d3e3d17d-1950-4372-86d7-00b7b60ab9b6.png)
OUTPUT:
![image](https://user-images.githubusercontent.com/123716596/236625631-57c80eab-b5bc-4ac8-b338-5ec5f16c2c0c.png)

# Q2. 
 Two processes are simultaneously accessing a shared resource (e.g. a printer) and both want to use it
at the same time. To prevent data corruption, you need to implement mutual exclusion.
![image](https://user-images.githubusercontent.com/123716596/236624927-e0ec99d6-a185-492e-9142-65416998ee5e.png)
![image](https://user-images.githubusercontent.com/123716596/236624950-ee61fd6e-5381-401c-8b95-d03d5cc39f6e.png)
OUTPUT:
![image](https://user-images.githubusercontent.com/123716596/236625665-012f4636-88ce-4cbd-9fff-1c0490080e46.png)


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
![image](https://user-images.githubusercontent.com/123716596/236625492-27d1723b-fd0c-4d1c-b5a2-6dfcc0a841d5.png)
![image](https://user-images.githubusercontent.com/123716596/236625517-4c248513-8e41-40f1-9c06-542229e5d92a.png)
![image](https://user-images.githubusercontent.com/123716596/236625562-c316786a-759d-4bb1-b4be-076acef5400a.png)
![image](https://user-images.githubusercontent.com/123716596/236625575-a381e584-7882-4b6d-8d1f-474a29f75bd9.png)
OUTPUT:
![image](https://user-images.githubusercontent.com/123716596/236625697-a50b669d-f925-447e-b192-309f2a672a6f.png)
