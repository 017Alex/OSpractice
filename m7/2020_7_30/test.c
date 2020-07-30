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
  printf("init g_val: %p\n,", &g_val);
  printf("un init g_val: %p\n", &un_g_val);

  char *mem = (char *)malloc(10);
  printf("heap addr: %p\n", mem);

  printf("stack addr: %p\n", &str);

  return 0;
}
