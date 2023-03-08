/* File prod.c Producer Code */
#define NAME "OS"
#define SIZE 15


int main(int argc, char *argv[]) {
	char msg[15] = "HelloWorldHello";
	int pipefd; //file descriptor to be used for our pipe
	printf("I %d, am a PROD.\nI will create and open a named pipe now.\n", 
 		getpid() );
	if(mkfifo(NAME,0666)<0) {
		perror("Error in call to mkfifo('OS',0666): ");
		exit(EXIT_FAILURE);
	}
	pipefd = open(NAME,O_WRONLY);
	printf("I will now write 'HelloWorldHello' 15 bytes\n");
      write(pipefd, msg, SIZE);  // 15 bytes in our string
      printf("I %d have been awaken atlast. I will now die",getpid());
      close(pipefd); // Reader will see EOF 
      exit(EXIT_SUCCESS);
}
