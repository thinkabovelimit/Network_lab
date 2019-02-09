#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int  main()
  {
     int pid;

     if ((pid=fork()) == -1)
        printf("fork error");
     else if (pid == 0) {
        execl("newfile", "newfile", NULL);
        printf("Return not expected. Succesfully executed");
     }
  }
