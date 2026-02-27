#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet1[10],vet2[10],vet3[20];
    int i,j,k;
    for(i=0;i<10;i++){
        vet1[i]=rand()%100;
        vet2[i]=rand()%100;
    }
    k=i=0;
    while(k<20){
        vet3[k]=vet1[i];
        k++;
        vet3[k]=vet2[i];
        k++;
        i++;
    }
    for(i=0;i<10;i++){
        printf("%d ",vet1[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d ",vet2[i]);
    }
    printf("\n");
    for(i=0;i<20;i++){
        printf("%d ",vet3[i]);
    }
    return 0;
}