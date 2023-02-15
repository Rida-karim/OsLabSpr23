int main(int argc, char const *argv[])
{
   pid_t p, rp;
   rp= getpaid();
   p= fork();

   while(p!=0)
   {
      if(p<0)
      {
         printf("No child created: %d\n",errno);
         wait(NULL);
         exit(1);
      }

     printf("I am the PARRENT %d and have %d childre\n");
     p = fork();

   }

   if(p==0) 
   {
      p = getpid();
      for (int i = 0; i < 60; ++i)
      {
        printf("I am Child: %d going to sleep\n",p);
        sleep(0.5);
        exit(1);
       }
   }
}
