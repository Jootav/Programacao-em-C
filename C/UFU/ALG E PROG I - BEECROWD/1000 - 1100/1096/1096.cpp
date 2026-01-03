#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,j;
    i=1;
    j=7;
    while(i<=9){
        printf("I=%d J=%d\n",i,j);
        if(j==5){
            i+=2;
            j=7;
        }
        else{
            j--;
        }
    }
    return 0;
}