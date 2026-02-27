#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,x,y,res,i,aux;
    n=x=y=i=aux=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        res=0;
        scanf("%d %d",&x,&y);
        if(x>y){
            aux=x;
            x=y;
            y=aux;
        }
        x++;
        while(x<y){
            if(x%2!=0){
                res=res+x;
            }
            x++;
        }
        printf("%d\n",res);
    }
    return 0;
}