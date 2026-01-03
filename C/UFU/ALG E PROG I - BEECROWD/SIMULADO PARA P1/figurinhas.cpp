#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float X,Y,T,aux;
    int Q;
    X=Y=T=Q=0;
    scanf("%f %f",&X,&Y);
    X=X*100; 
    Y=Y*100;
    while(X>=Y){
        X=X-Y;
        Q++;
    }
    T=(X/100);
    printf("%d %.2f\n",Q,T);
    return 0;
}