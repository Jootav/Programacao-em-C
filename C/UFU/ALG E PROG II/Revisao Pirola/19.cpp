#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet1[10],vet2[10];
    int i,j,k;
    for(i=0;i<10;i++){
        vet1[i]=rand()%100;
    }
    for(i=9;i>=0;i--){
        vet2[i]=vet1[10-i-1];
    }
    for(i=0;i<10;i++){
        printf("%d ",vet1[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d ",vet2[i]);
    }
    return 0;
}