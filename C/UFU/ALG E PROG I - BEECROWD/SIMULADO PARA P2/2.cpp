#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j;
    int l,c;
    scanf("%d %d",&l,&c);
    double m[l][c],mt[c][l];
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            mt[j][i]=m[i][j];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            if(j<l-1){
                printf("%.0lf ",mt[i][j]);
            }
            else{
                printf("%.0lf",mt[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}