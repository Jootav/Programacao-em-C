#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,i,j;
    float s;
    n=s=0;
    i=j=1;
    while(j<=39){
        s=s+((j*1.0)/i);
        j+=2;
        i*=2;
    }
    printf("%.2f\n",s);
    return 0;
}