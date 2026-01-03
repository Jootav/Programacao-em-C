#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,i;
    float s;
    n=s=0;
    i=1;
    while(i<=100){
        s=s+(1.0/i);
        i++;
    }
    printf("%.2f\n",s);
    return 0;
}