#include<stdio.h>
#include<unistd.h>
int main(){
  printf("Real user id of the process is:%d\n",getuid());
  printf("Effective real user id of the process id is:%d\n",geteuid());
  printf("Group id of the process id is:%d\n",getgid());
  printf("Effective group id of the process id is:%d\n",getegid());
  return (0);

}
