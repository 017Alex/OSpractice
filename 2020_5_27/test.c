#include<stdio.h>
#include<unistd.h>

int main()
{
  printf("begin start ...\n");
  sleep(1);
  pid_t id = fork();
  if(id == 0)
  {
    //child
    while(1)
    {
      printf("I am child, pid: %d, ppid: %d\n", getpid(), getppid());
      sleep(1);
    }
  }
  else if(id > 0)
  {
     //father
     while(1)
    {
     printf("I am father, pid: %d, ppid: %d\n", getpid(), getppid());
     sleep(2);
    }   
  }
  else
  {
     //error
  }
  return 0;
}
