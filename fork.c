#include<stdio.h>
#include<unistd.h>
int main(){
  int pid;
  pid=fork();
  if(pid==0){
    printf("Hello from parent process\n");

  }
  else{
    printf("Hello from child process\n" );
  }
  return(0);
}
