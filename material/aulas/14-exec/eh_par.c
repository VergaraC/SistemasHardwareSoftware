#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char prog[] = "eh_par";
    char *args[] = {"eh_par", argv[1], NULL};
    long num = atol(args[1]);
    if(num < 0){
        return -1;
    }else if (num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
    execvp(prog,args);
    printf("kkj");
    }
