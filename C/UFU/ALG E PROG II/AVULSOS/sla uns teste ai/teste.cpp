#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i,j,tamanho;
    char frase[50];
    fgets(frase,sizeof(frase),stdin);

    //evitamos que o strlen pegue o \n inserido pelo usuario
    tamanho=strlen(frase);
    frase[tamanho-1] = '\0';
    tamanho=strlen(frase);
    printf("%s",frase);
    printf(" %d",strlen(frase));

    for(i=0;i<tamanho;i++){
        if (i==tamanho-1 && frase[i] == 'a'){
            frase[i]='o';
        }
        if (i==0 && frase[i]>90){ // primeira letra maiuscula
            frase[i]-=32;
        }
    }
    printf("\n%s",frase);
    printf(" %d",strlen(frase));
    return 0;
}