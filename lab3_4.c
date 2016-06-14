#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main(){
    int p[2],pid;
    pipe(p);
    pid=fork();
    if(pid==0)
        printf("In the child p[0] is %d p[1] is %d\n",p[0],p[1]);
    else
        printf("In the parent p[0] is %d p[1] is %d\n",p[0],p[1]);
}
