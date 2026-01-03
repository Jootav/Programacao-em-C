#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j;
    int g;
    scanf("%d",&g);
    int m[g][g];
    for(i=0;i<g;i++){
        for(j=0;j<g;j++){
            if(i==j){
                m[i][j]=1;
            }
            else{
                m[i][j]=0;
            }
            if(j<g-1){
                printf("%d ",m[i][j]);
            }
            else{
                printf("%d",m[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}