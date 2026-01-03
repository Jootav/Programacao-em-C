#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i,j;
    int iFas,jFas,iPac,jPac;
    int distancia;
    char linha[100];

    for(i=1;fgets(linha,sizeof(linha),stdin)!=NULL;i++){
        int col = 0;
        for(j=0;linha[j]!='\0';j++){
            if(linha[j]=='o'){
                col++;
            }
            if(linha[j]=='p'){
                iPac=i;
                jPac=col++;
            }
            if(linha[j]=='f'){
                iFas=i;
                jFas=col++;
            }
        }
    }
    distancia = abs(iFas - iPac) + abs(jFas - jPac);
    printf("%d\n",distancia);
    return 0;
}