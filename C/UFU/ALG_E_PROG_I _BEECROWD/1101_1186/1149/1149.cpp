#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,n,i,soma;
    a=n=i=soma=0;

    scanf("%d %d",&a,&n);
    while(n<=0){
        scanf("%d",&n);
    }
    while(i<=n-1){
        soma=soma+(a+i);
        i++;
    }
    printf("%d",soma);
    return 0;
}