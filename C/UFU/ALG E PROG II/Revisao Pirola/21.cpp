#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int mat[15][5];
    int i,j,k,l,flag,cont,elemento;

    for(i=0;i<15;i++){
        for(j=0;j<5;j++){
            mat[i][j]=rand()%100;
        }
    }
    for(i=0;i<15;i++){
        for(j=0;j<5;j++){
            elemento=mat[i][j];
            for(k=i;k<15;k++){
                for(l=j;l<5;l++){
                    if(mat[k][l]==elemento){
                        cont++;
                        mat[k][l]=-1;
                    }
                }
            }
        }
    }
    return 0;
}