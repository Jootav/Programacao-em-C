#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tam1 12
#define tam2 12

int main(){
    int n,i,j;
    char c;
    double m[tam1][tam2], soma;
    soma=n=0;
    scanf(" %c",&c);
    //ler matriz
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    for(j=7;j<12;j++){
        for(i=12-j;i<j;i++){
            soma=soma+m[i][j];
            n++;
        }
    }
    if(c == 'S' || c == 's'){
        printf("%.1lf\n",soma);
    }
    else if(c == 'M' || c == 'm'){
        printf("%.1lf\n",soma/n);
    }
    return 0;
}