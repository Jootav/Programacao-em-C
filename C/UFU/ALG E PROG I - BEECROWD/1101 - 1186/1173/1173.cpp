#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x[10],i,j;
    scanf("%d",&x[0]); 
    for(i=1;i<10;i++){
        x[i]=x[i-1]*2;
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,x[i]);
    }
    return 0;
}