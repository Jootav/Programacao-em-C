#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j,x,v[10],aux;
    for(i=0;i<10;i++){
        scanf("%d",&v[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d\n",v[i]);
    }
    return 0;
}