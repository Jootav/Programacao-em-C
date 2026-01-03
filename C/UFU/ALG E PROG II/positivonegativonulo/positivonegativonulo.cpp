#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num;

    scanf("%d", &num);

    if(num>0){
        printf("positivo\n");
    }
    else if(num<0){
        printf("negativo\n");
    }
    else{
        printf("nulo\n");
    }

    return 0;
}