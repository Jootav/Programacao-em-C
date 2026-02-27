#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num[3], numord[3], i, j, aux;
    aux=i=0;
    for(i=0;i<3;i++){
        scanf("%d", &num[i]);
        numord[i]=num[i];
    }
    for (j = 1; j < 3; j++){
        for (i = 0; i < 2; i++){
            if (numord[i] > numord[i + 1]){
                aux = numord[i];
                numord[i] = numord[i + 1];
                numord[i + 1] = aux;
            }
        }
    }

    for(i=0;i<3;i++){
        printf("%d\n", numord[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("%d\n", num[i]);
    }

    return 0;
}