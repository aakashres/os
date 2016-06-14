#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    int pid;
    pid =  fork();
    if (pid==0){
        printf("I'm child. My process ID is %d and parent process ID is %d\n",getpid(),getppid());

        sleep(2);

        printf("I'm child. My process ID is %d and parent process ID is %d\n",getpid(),getppid());
    }
    else{
        //anchor
        printf("I'm parent. My process ID is %d and parent process ID is %d\n",getpid(),getppid());
    }
    return 0;
}



