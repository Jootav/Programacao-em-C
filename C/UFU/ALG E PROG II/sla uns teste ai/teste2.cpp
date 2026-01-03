#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>   
#include <windows.h>

int main(){
    int i,j,l,c;
    scanf("%d%d",&l,&c);
    long long int m[l][c];
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%lld",&m[i][j]);
        }
    }

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%lld",m[i][j]);
            if(j<c-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            printf("%lld",m[j][i]);
            if(j<l-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}