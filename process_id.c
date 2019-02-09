#include<stdio.h>
#include<unistd.h>
int main(){
  printf(" process id of parent process is is:%d",getpid(),getppid());
  fork();
  printf("  process id of child process is:%d  ",getpid(),getppid());

}
