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
