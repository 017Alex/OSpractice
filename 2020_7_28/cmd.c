#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
 // char *str="NEWVAL=12345";
  //putenv(str);
  printf("PATH: %s\n", getenv("PATH"));
  printf("HOME: %s\n", getenv("HOME"));
  printf("SHELL: %s\n", getenv("SHELL"));
  return 0;
}

/*
int main()
{
    extern char **environ;
    int i = 0;
    for(;environ[i];i++)
    {
      printf("%d: %s\n", i, environ[i]);
    }
    return 0;
}
*/

/*
int main(int argc, char *argv[], char *env[])
{
  int i = 0;
  for(; env[i]; i++)
  {
    printf("%s\n", env[i]);
  }
  return 0;
}
*/
