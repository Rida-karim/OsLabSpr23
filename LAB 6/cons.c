/* file cons.c Consumer Code */
#define NAME "OS"
#define SIZE 15


int main(int argc, char *argv[]) {
	char msg[SIZE]; //char buffer to receive message
	int pipefd; //file descriptor to be used for our pipe
	printf("I %d, am a CONS. I will only open a named pipe now.\n", getpid());
	pipefd = open(NAME,O_RDONLY);
	printf("I will now read 15 bytes from the pipe\n");
	sleep(5);
      read(pipefd, &msg, SIZE); 
      printf("MSG RECV: %s\n I will now die",msg);
      close(pipefd); // Writer will see Read Complete 
      exit(EXIT_SUCCESS);
}
