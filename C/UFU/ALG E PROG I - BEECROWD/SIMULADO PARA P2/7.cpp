#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i,j,g=0;
    int lin,col;
    scanf("%d",&g);
    //tamanho da matriz
    lin=pow(2.0,(double)g);
    col=g;
    //declaracao dela
    int m[lin][col]={};

    for(i=0;i<lin;i++){
        for(j=col-1;j>=0;j--){
            int bit = (i>>j) & 1;
            printf("%d", bit);
            if(j<col){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}