#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,x,y,i,j,aux;
    n=j=x=y=aux=0;
    i=1;
    scanf("%d",&x);
    while(x!=0){
        i=1;
        while(i<=x){
            if(i==x){
                printf("%d\n",i);
                break;
            }
            else{
                printf("%d ",i);
                i++;
            }
        }
        scanf("%d",&x);
    }
    return 0;
}