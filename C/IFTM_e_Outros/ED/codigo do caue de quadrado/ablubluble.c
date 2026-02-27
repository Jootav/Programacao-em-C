#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int D;
    printf("Digite o valor da dimensÃ£o do quadrado: ");
    scanf("%d",&D);
    if (D<0){
        printf("Digite um valor positivo");
    }
    else{
        for(int l=0;l<D;l++) {
            for(int c = 0; c < D;c++){
                printf("X ");
            }
        printf("\n"); }
            ;
    }
    return 0;
}