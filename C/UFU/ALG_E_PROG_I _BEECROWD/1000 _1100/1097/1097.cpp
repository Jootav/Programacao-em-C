#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,j,cont;
    i=1;
    j=7;
    cont=0;
    while(i<=9){
        printf("I=%d J=%d\n",i,j);
        if(cont==2){
            i+=2;
            j+=4;
            cont=0;
        }
        else{
            j--;
            cont++;
        }
    }
    return 0;
}