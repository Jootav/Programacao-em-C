#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tam1 12
#define tam2 12

int main(){
    int n,i,j;
    char c;
    float m[tam1][tam2], soma;
    soma=0;
    scanf(" %c",&c);
    //ler matriz
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            scanf("%f",&m[i][j]);
        }
    }
    for(j=0;j<tam1;j++){
        for(i=j+1;i<tam2;i++){
            soma=soma+m[i][j];
            n++;
        }
    }
    if(c == 'S' || c == 's'){
        printf("%.1f\n",soma);
    }
    else if(c == 'M' || c == 'm'){
        printf("%.1f\n",soma/n);
    }
    return 0;
}