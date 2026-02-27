#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i,j,aux;
    i=j=aux=0;
    char frase[300];
    fgets(frase,sizeof(frase),stdin);
    for(i=0;i<strlen(frase);i++){
        if(frase[i]>=48 && frase[i]<=57){
            aux++;
        }
    }
    printf("%d\n",aux);
    return 0;
}