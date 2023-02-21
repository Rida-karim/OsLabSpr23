# LAB 4
# TASK 1

Task1: The infinite process creating machine.
For this task, if you wish to accept it, create a C program in Linux (WSL, VM, Dual boot anything) that will
1. Create child process inside a while loop every 0.2 sec until operating system gives an error. This process must also print how many child it has after creating each child.  
2. The child process should not create any more child.
3. Each child process should sleep for 1 sec and print their process id and parent id and sleep again for 1 sec. And must do this for 30 seconds and terminate.
4. The parent process must wait for all children to terminate.
5. Answer these questions in the readme.md file on GitHub for this lab task. (Obviously you will attach screenshots and upload the code file.)

    What is the limit of child process a process can create.
    Can you increase this limit. (Find out online)

![image](https://user-images.githubusercontent.com/123716596/218942633-88af6499-5994-48e3-a520-9a20689c2cd6.png)
![image](https://user-images.githubusercontent.com/123716596/218948588-1db41e32-05e3-4f73-8393-2e32338596eb.png)
![image](https://user-images.githubusercontent.com/123716596/218947485-55d9feed-7541-44bb-93e5-f4b776e7c386.png)


![image](https://user-images.githubusercontent.com/123716596/218947838-3c96eaa6-4445-40c1-90f1-9fea4a6dfed4.png)
![image](https://user-images.githubusercontent.com/123716596/218947921-86b6145f-b0d8-4b78-aca5-5a99b0d7e118.png)

# TASK 2
Task2: Inception of Process Creating Machines within a Process Creating Machine within a Process Creating Machine... 
For this task modify the code you made in Task1. To
1. Make 1st fork() call and start the same prog, using the exec call or its variants.    
2. Continue normal task 1 creating infinite child processes using fork(). 


This will create many copies of the original process running side by side each creating many children. There will be one such process which will not be able to create children allowed by OS for each process because the OS process limit will be reached. Can you spot that and print the console screenshot.

![image](https://user-images.githubusercontent.com/123716596/220366297-d094caa2-089c-4c8d-b2cb-01afb227cb02.png)
![image](https://user-images.githubusercontent.com/123716596/220366793-256fcfa3-1508-4ba2-ac07-cb2f387be07a.png)
![image](https://user-images.githubusercontent.com/123716596/220367712-5d7e3e8a-1abe-46c0-a68e-051c8fa46579.png)





