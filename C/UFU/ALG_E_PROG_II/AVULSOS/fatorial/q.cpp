#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}

int main(){
    int n,res;
    //descobrir fatorial de um numero
    scanf("%d",&n);
    res=fatorial(n);
    printf("%d",res);
}