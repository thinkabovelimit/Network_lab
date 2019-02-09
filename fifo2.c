#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>

int main(void){

    const char *pathname = "fifoTes";

    if((mkfifo(pathname,0666)!=-1)){
        printf("Pipe opened.\n");
    } else {
        printf("Could not open pipe.");
        printf(" %s\n", strerror(errno));
    }

    return 0;

}
