#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,x,y,i,j,aux;
    n=j=x=y=aux=0;
    i=1;
    scanf("%d%d",&x,&y);
    while(i<=y){
        if(aux==x){
            printf("\n");
            aux=0;
        }
        else{
            if(i==y){
                printf("%d\n",i);
                aux++;
                i++;
            }
            else{
                printf("%d",i);
                aux++;
                i++;
                if(aux!=x){
                    printf(" ");
                }
            }
        }
    }
    return 0;
}