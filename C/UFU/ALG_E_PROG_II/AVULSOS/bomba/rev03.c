#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compactar(int *v, int *tam){
    int i,j,aux,flag=0;
    for(i=0;i<*tam;i++){
        if(*(v+i)<0){
            *(v+i)=-1;
            flag++;
        }
    }
    for(j=0;j<(*tam);j++){
        for(i=0;i<(*tam)-j-1;i++){
            if(*(v+i)<*(v+i+1)){
                aux=*(v+i);
                *(v+i)=*(v+i+1);
                *(v+i+1)=aux;
            }
        }
    }
    *tam-=flag;
}

int main()
{
    int n,i,tam;
    tam=n=5;
    int vet[tam],*pontV,*pontN;
    pontV=vet;
    pontN=&n;

    for(i=0;i<n;i++)
        scanf("%d",vet+i);
    compactar(pontV,pontN);
    for(i=0;i<n;i++)
        printf("%d ",*(vet+i));
}
