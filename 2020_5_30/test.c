#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
  int ret = fork();
  if(ret < 0)
  {
    printf("fork error!\n");
    return 0;
  }
  else if(ret == 0)
  {
    //child
    while(1)
    {
       printf("I am child, quit begin, enter Zombie!\n");
       sleep(20);
    }
    exit(1);
  }
  else{
    printf("I am father, pid:%d, ppid:%d\n", getpid(), getppid());
    sleep(5);
    exit(2);
  }
}
