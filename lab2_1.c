#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    if(!fork()){
        printf("Helllo!!! I'm from children %d %d \n",getpid(),getppid());
    }
    else{
        printf("Hello!!! I'm from parent %d %d \n",getpid(),getppid());
    }
    return 0;
}

