#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x,y,i,soma;
    i=x=y=soma=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        i=x;
        x=y;
        y=i;
    }
    for(i=x+1;i<y;i++){
        if(i%2!=0){
            //printf("i = %d\n", i);
            //printf("soma = %d\n", soma);
            soma=soma+i;
        }
    }
    printf("%d\n", soma);
    return 0;
}