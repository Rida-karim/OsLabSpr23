#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{

    int count = 0;
    pid_t pid;

    while((pid = fork()) != -1) 
    {

        count++;
        if(count == 5)
        {
    			printf("\nChild limit exceed");
 
	    		exit(1);
        }

        if(pid == 0) 
        {
            // child process

            printf("Child %d created.\n", count);
            sleep(1);

            printf("Child %d (pid=%d, ppid=%d) started.\n", count, getpid(), getppid());
            sleep(1);

            printf("Child %d (pid=%d, ppid=%d) finished.\n", count, getpid(), getppid());
            exit(0);

        }
       
        // parent process

        wait(NULL);
        printf("Parent waited for child %d (pid=%d).\n", count, pid);
        usleep(200000);
    }

    perror("fork");
    return 0;

}
