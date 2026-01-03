#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,x,i,j,soma;
    soma=0;
    n=x=i=j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        soma=0;
        scanf("%d",&x);
        for(j=1;j<x;j++){
            if(x%j==0)
                soma=soma+j;
        }
        if(soma==x){
            printf("%d eh perfeito\n",x);
        }
        else{
            printf("%d nao eh perfeito\n",x);
        }
    }
    return 0;
}