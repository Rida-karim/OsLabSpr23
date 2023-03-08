/* FILE: shm_prod.c */
#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sysexits.h>
#include <unistd.h>
/* NOTE: These must be same on both prod and cons */
//--CONSTANTS--//
#define SHMNAME "/OS"	//Name for our shared memory
#define SIZE (sizeof(int)*10) //size of shared memory
				//10 integers only.
/**
 * @brief      main function entry point
 * @param[in]  argc  The count of arguments
 * @param      argv  The arguments array
 * @return     normal exit or error.
 */
int main(int argc, char const *argv[]){
//--Creating shared memory object--//
	int shmObj = shm_open(SHMNAME, O_CREAT | O_RDWR , 0600);
//--Ask OS to reserve the sharem memory for 10 integers--//
	ftruncate(shmObj,SIZE);
//--Ask the OS to MAP the memory to a pointer--//
	int *ptrToShm = (int *)mmap(0, SIZE, PROT_WRITE | PROT_READ, 
 					MAP_SHARED, shmObj, 0); 
/*NOTE:
 *Now you can use ptrToShm as if it were a buffer dynamically allocated and 
 *read and write to it. Also we have explicitly cast the returned memory location
 *from mmap as pointer to int. It can be anything char, double, float, etc.
 *or any custom struct. But we will need to specifify the SIZE accordingly.
 */
	//--Writing 10 random numbers to our shared memory--//
	for (int i = 0; i < 10; ++i) {
		ptrToShm[i] = rand();
	}
	//--sleep for 3 sec hoping consumer uses these numbers--//
	sleep(3);
	//--Print the shared memory--//
	printf("==SENDER==\nI woke up from a 3 sec sleep\n");
	for (int i = 0; i < 10; ++i) {
		printf("%d, ",ptrToShm[i]);
	} printf("\nWhat has happen to my data?...\n");
	//--Safely release and close the shared memory--//
	munmap(ptrToShm, SIZE);
	close(shmObj);
	shm_unlink(SHMNAME);
	return EXIT_SUCCESS;
}
