#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[8],vetPar[8],vetImp[8];
    int i,j,k;
    for(i=0;i<8;i++){
        vet[i]=rand()%100;
        vetPar[i]=0;
        vetImp[i]=0;
    }
    j=k=0;
    for(i=0;i<8;i++){
        if(vet[i]%2==0){
            vetPar[j]=vet[i];
            j++;
        }
        if(vet[i]%2!=0){
            vetImp[k]=vet[i];
            k++;
        }
    }
    for(i=0;i<8;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    for(i=0;i<8;i++){
        printf("%d ",vetPar[i]);
    }
    printf("\n");
    for(i=0;i<8;i++){
        printf("%d ",vetImp[i]);
    }
    return 0;
}