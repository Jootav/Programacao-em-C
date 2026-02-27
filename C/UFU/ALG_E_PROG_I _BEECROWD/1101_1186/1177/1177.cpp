#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double X,v[100];
    int i,j;
    i=j=0;
    scanf("%lf",&X);
    for(i=0;i<100;i++){
        if(i==0){
            v[i]=X;
        }
        else{
            v[i]=v[i-1]/2.0;
        }
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,v[i]);
    }
    return 0;
}