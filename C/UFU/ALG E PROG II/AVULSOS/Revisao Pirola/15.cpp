#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i,j,qtdPares=0,qtdImp=0;
    int vet[6];
    for(i=0;i<6;i++){
        vet[i]=rand()%100;
    }
    for(i=0;i<6;i++){
        if(vet[i]%2==0){
            printf("%d ",vet[i]);
            qtdPares++;
        }
    }
    printf("QUANTIDADE DE PARES = %d\n",qtdPares);
    for(i=0;i<6;i++){
        if(vet[i]%2!=0){
            printf("%d ",vet[i]);
            qtdImp++;
        }
    }
    printf("QUANTIDADE DE IMPARES = %d\n",qtdImp);
    return 0;
}