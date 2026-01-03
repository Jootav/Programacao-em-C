#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int normalizarVet (float *vet, float soma, int n){
    int i;
    for(i=0;i<n;i++){
        *(vet+i)=*(vet+i)/soma;
    }
}

void estatisticas (float *vet, float *min, float *max, float soma, int tam, float *media){
    int i;
    for(i=0;i<tam;i++){
        if(i==0){
            *min=*(vet+i);
            *max=*(vet+i);
        }
        else{
            if(*(vet+i)>*max){
                *max=*(vet+i);
            }
            if(*(vet+i)<*min){
                *min=*(vet+i);
            }
        }
    }
    *media=soma/tam;
}

int main()
{
    int i,n;
    printf("insira n: ");
    scanf("%d",&n);

    float vet[n], *pon, soma=0.0;
    float min=0,max=0,media=0;
    pon=vet;
    for(i=0;i<n;i++){
        scanf("%f",vet+i);
        soma+=*(vet+i);
    }
    //normalizarVet(vet,soma,n);
    estatisticas(vet,&min,&max,soma,n,&media);
    
    for(i=0;i<n;i++)
        printf("%.2f ",*(vet+i));

    printf("\nmin = %.2f | max = %.2f | media = %.2f",min,max,media);
}
