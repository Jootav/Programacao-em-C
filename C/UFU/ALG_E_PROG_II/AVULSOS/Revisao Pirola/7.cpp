#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i,j,cont=0;
    float a,b,c,vet[3],temp,maior;
    scanf("%d%f%f%f",&i,&a,&b,&c);
    vet[0]=a; vet[1]=b; vet[2]=c; 
    if(i==1){ // ordem crescente
        for(j=0;j<2;j++){
            for(cont=0;cont<2;cont++){
                if(vet[cont]>vet[cont+1]){
                    temp=vet[cont];
                    vet[cont]=vet[cont+1];
                    vet[cont+1]=temp;
                }
            }
        }
    }
    else{ // ordem descrescente
        for(j=0;j<2;j++){
            for(cont=0;cont<2;cont++){
                if(vet[cont]<vet[cont+1]){
                    temp=vet[cont];
                    vet[cont]=vet[cont+1];
                    vet[cont+1]=temp;
                }
            }
        }
        if(i==3){
            temp=vet[0];
            vet[0]=vet[1];
            vet[1]=temp;
        }
    }
    for(cont=0;cont<3;cont++){
        printf("%0.1f ",vet[cont]);
    }

    return 0;
}