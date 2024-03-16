/* myprog.c */
#include <unistd.h>
#include <stdio.h>

extern char **environ;

void printenv()
{
  int i = 0;
  while (environ[i] != NULL) {
     printf("%s\n", environ[i]);
     i++;
  }
}

int main()
{
    printenv();
    sleep(1);
    return 0;
}