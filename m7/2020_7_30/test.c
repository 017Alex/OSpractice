#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int g_val = 0;
int main()
{
  pid_t id = fork();
  if(id < 0){
    perror("fork");
    return 0;

  }
  else if(id == 0){ //child,子进程肯定先跑完，也就是子进程先修改，完成之后，父进程再读取
  g_val=100;
  printf("child[%d]: %d : %p\n", getpid(), g_val, &g_val);
  }else{ //parent
  sleep(3);
  printf("parent[%d]: %d : %p\n", getpid(), g_val, &g_val);
  }
  sleep(1);
  return 0;

}
/*
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int un_g_val;
int g_val = 100;

int main()
{
  char *str = "hello";
  printf("code addr: %p\n", main);
  printf("readonly : %p\n", str);
  printf("init g_val: %p\n", &g_val);
  printf("un init g_val: %p\n", &un_g_val);

  char *mem1 = (char *)malloc(10);
  char *mem2 = (char *)malloc(10);
  char *mem3 = (char *)malloc(10);
  printf("heap1 addr: %p\n", mem1);
  printf("heap2 addr: %p\n", mem2);
  printf("heap3 addr: %p\n", mem3);

  static int x;
  printf("stack addr: %p\n", &str);
  printf("stack addr: %p\n", &mem1);
  printf("stack addr: %p\n", &mem2);
  printf("stack addr: %p\n", &mem3);
  printf("x stack addr: %p\n", &x);

  return 0;
}
*/
