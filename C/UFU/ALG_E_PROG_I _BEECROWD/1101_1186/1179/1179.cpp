#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirVet (int vet[], int x){
    int i = 0,j = 0;
    if(vet[0]%2==0){
        for(i=0;i<x;i++){
            printf("par[%d] = %d\n",i,vet[i]);
        }
    }
    else{
        for(i=0;i<x;i++){
            printf("impar[%d] = %d\n",i,vet[i]);
        }
    }
   
}

void zerarVet (int vet[]){
    int i,j;
    for(i=0;i<5;i++){
        vet[i]=0;
    }
}

int main(){
    int x,i = 0,j = 0,c;
    int par[5],impar[5];
    
    zerarVet(par);
    zerarVet(impar);

    c=1; // usar 1 pra ficar mais facil
    while(c<=15){
        scanf("%d",&x);
        if(x%2==0){ // par
            par[i]=x;
            i++;
            if(i==5){ // se estiver completo
                imprimirVet(par,i);
                zerarVet(par);
                i=0;
            }
        }
        else{ // impar
            impar[j]=x;
            j++;
            if(j==5){ // se estiver completo
                imprimirVet(impar,j);
                zerarVet(impar);
                j=0;
            }
        }

        if(c==15){ // imprimir o resto do vetor
            imprimirVet(impar,j);
            imprimirVet(par,i);
        }

        c++;
    }
    return 0;
}