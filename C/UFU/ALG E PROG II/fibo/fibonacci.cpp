#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n,res;
    //descobrir fibonacci de um numero
    scanf("%d",&n);
    res=fibonacci(n);
    printf("%d",res);
}