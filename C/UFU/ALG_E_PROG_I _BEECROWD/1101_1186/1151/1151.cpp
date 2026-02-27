#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,i,atual,n1,n2,aux;
    n=i=atual=0;
    n1=0;
    n2=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1){
            printf("%d",n1);
        }
        else if(i==2){
            printf("%d",n2);
        }
        else{
            atual=n1+n2;
            n1=n2;
            n2=atual;
            printf("%d", atual);
        }
        if(i<n){
            printf(" ");
        }
        else if(i==n){
            printf("\n");
        }
    }
    return 0;
}