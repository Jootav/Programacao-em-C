#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j,d;
    i=j=d=0;

    long long m[d][d], soma = 0;
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            scanf("%lld",&m[i][j]);
        }
    }
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            if((i+j)==d-1 && m[i][j]%2!=0){
                soma+=m[i][j];
            }
        }
    }
    printf("%lld\n",soma);
    return 0;
}