#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main(){
    int pfd[2];
    if(pipe(pfd)<0)
        printf("Error\n");
    if(!fork()){
        char data;
        printf("I'm child\n");
        printf("Press any key to exit.....\n");
        scanf("%c, ",&data);
        write(pfd[1],&data,1);
    }
    else{
        char data;
        read(pfd[0],&data,1);
        printf("I'm parent\n");
        printf("Received %c from child\n", data);
        printf("Parent exiting...\n");
        exit(0);
    }
}

