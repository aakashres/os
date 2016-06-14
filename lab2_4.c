#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int i=0,j=0,pid;
    pid=fork();
    if(pid==0){
        for(i=0;i<500;i++)
           printf("%d\t",i);
    }
    else{
       // wait(0);
        if(pid>0){
            for(i=0;j<500;j++)
                printf("%d",j);
        }
    }
    return 0;
}

