#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,n,i,j;
    int men, menPos;
    men=menPos=0;
    scanf("%d",&n);
    int v[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&x);
        v[i]=x;
        if(i==0){
            men=v[i];
        }
    }
    for(i=0;i<n;i++){
        if(men>v[i]){
            men=v[i];
            menPos=i;
        }
    }

    printf("Menor valor: %d\n",men);
    printf("Posicao: %d\n",menPos);
    return 0;
}