#include <stdio.h>
#include <stdlib.h>

int somVetor (int *p, int contador, int tam) {
    if(contador==(tam-1)){
        return (*(p+contador));
    } else {
        return (*(p+contador)+somVetor(p,contador+1,tam));
    }
}

int main() {
    int soma, tamanho=8, contador=0;
    int vet[]={1,2,3,4,5,6,7,8}, *pVet;
    pVet=vet; // pontero

    soma=somVetor(pVet,contador,tamanho);
    printf("%d",soma);
    return 0;
}
