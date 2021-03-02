#include "stdio.h"

int main(int argc, char *argv[]) {
    
    int n;
    printf("Digite o N \n");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d ", j*i);
        }
        printf("\n");
    }
}


