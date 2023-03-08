/* FILE: shm_cons.c */
#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sysexits.h>
#include <unistd.h>
/* NOTE: These must be same on both prod and cons */
//--CONSTANTS--//
#define SHMNAME "/OS"          //Name for our shared memory
#define SIZE (sizeof(int)*262144) //size for our shared memory
                              //10 integers only.
/**
 * @brief      main function entry point
 * @param[in]  argc  The count of arguments
 * @param      argv  The arguments array
 * @return     normal exit or error.
 */
int main(int argc, char const *argv[]){
    //--Creating shared memory object--//
    /*NOTE: Not asking for creating */
    int shmObj = shm_open(SHMNAME, O_RDWR , 0666);
    //-- CHECK ERROR IF NOT ALREADY CREATED BY PRODUCER--//
    if(shmObj < 0){
        perror("Error Opening Sharem Memory: shm.open()\n");
        return EXIT_FAILURE;
    }
    //--Ask OS to map the sharem memory for 10 integers--//
    int *ptrToShm = (int *)mmap(0, SIZE, PROT_WRITE | PROT_READ, 
 				   MAP_SHARED, shmObj, 0); 
    /*NOTE:
     *Now you can use ptrToShm as if it were a buffer dynamically allocated and 
     *read and write to it. Also we have explicitly cast the returned memory location
     *from mmap as pointer to int. It can be anything char, double, float, etc.
     *or any custom struct. But we will need to specifify the SIZE accordingly.
     */
    //--Reading 10 random numbers from our shared memory and setting them to 0--//
    printf("==RECEIVER==\nI will eat 10 integers now!\n");
    for (int i = 0; i < 262144; ++i) {
        printf("%d, ",ptrToShm[i]);
        ptrToShm[i] = 0;
    }printf("\n==DONE EATING MMMmmm!\n");
    //--Safely release and close the shared memory--//
    munmap(ptrToShm, SIZE);
    close(shmObj);
    return EXIT_SUCCESS;
}
