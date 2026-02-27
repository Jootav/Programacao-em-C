#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int T,N,i,j;
    double fibo[61];
    for(i=0;i<61;i++){
        if(i==0){
            fibo[i]=0;
        }
        else if(i==1 || i==2){
            fibo[i]=1;
        }
        else{
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
    }
    scanf("%d",&T);
    for(j=0;j<T;j++){
        scanf("%d",&N);
        printf("Fib(%d) = %.0lf\n",N,fibo[N]);
    }
    return 0;
}