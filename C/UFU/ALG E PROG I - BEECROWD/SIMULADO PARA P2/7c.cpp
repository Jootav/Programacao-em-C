#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i,j,g=0,cont=0,vlr_metade=0;
    int lin,col,num=0;
    scanf("%d",&g);
    //tamanho da matriz
    lin=pow(2.0,(double)g);
    col=g;
    vlr_metade=lin;
    //declaracao dela
    int m[col][lin]={};
    for(i=0;i<col;i++){
        num=0; // numero que sera impresso
        cont=0; // em uma coluna, sempre tem g/2 0s e 1s
        vlr_metade=vlr_metade/2;
        
        for(j=0;j<lin;j++){
            if(cont==vlr_metade){
                if(num==0){
                    num=1;
                    cont=0;
                }
                else{
                    num=0;
                    cont=0;
                }
            }
            m[i][j]=num;
            cont++;
        }
    }

    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d", m[j][i]);
            if(j==col-1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}