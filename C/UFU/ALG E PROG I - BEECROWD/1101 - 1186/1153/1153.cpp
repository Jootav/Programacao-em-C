#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int fat,n,i,cont;
    cont=i=n=0;
    fat=1;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        fat=fat*i;
        i++;
    }
    printf("%d\n",fat);

    return 0;
}