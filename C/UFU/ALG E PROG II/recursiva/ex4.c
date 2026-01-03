#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiorNoVetor (int *vetor, int pos, int tam, int num) {
    if(pos==tam){
        return(num);
    } else {
        if(vetor[pos]>=num){
            num=vetor[pos];
        }
        return(maiorNoVetor(vetor,pos+1,tam,num));
    }
}

int main() {
    int vet[]={7,2,10,1,5,35};
    int i=0,tam=6,num=vet[0];
    printf("%d",maiorNoVetor(vet,i,tam,num));
}
