#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,x,y,i,j;
    int soma = 0;
    n=x=y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        soma=0;
        scanf("%d%d",&x,&y);
        j=0;
        while(j<y){
            if(x%2!=0){
                soma=soma+x;
                j++;
            }
            x++;
        }
        printf("%d\n",soma);
    }
    return 0;
}