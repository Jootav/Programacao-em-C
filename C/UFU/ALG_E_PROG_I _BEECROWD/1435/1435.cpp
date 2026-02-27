#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,i,j,aux;
    scanf("%d",&n);
    int v[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                v[i][j]=1;
            }
            else{
                v[i][j]=2;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("   %d",v[i][j]);
        }
        printf("\n");
    }
    return 0;
}