#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 3){
        printf("ERROR \n");
        return -1;
    }
    double soma = 0;
    double num;
    for(int i = 1 ; i < argc; i++){
        num = atof(argv[i]);
        soma += num;
        }
    printf("SOMA: %lf",soma);
    return 1;
    }
