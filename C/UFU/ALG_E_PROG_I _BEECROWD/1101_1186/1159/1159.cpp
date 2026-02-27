#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,i,j;
    int soma = 0;
    x=i=j=0;
    scanf("%d",&x);
    while(x!=0){
        i=soma=0;
        while(i<5){
            if(x%2==0){
                soma=soma+x;
                i++;
            }
            x++;
        }
        printf("%d\n",soma);
        scanf("%d",&x);
    }
    return 0;
}