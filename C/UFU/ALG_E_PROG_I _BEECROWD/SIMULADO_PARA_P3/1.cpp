#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char palavra[101],palavrainv[101];
    int i,j,tamanho;

    scanf(" %[^\n]s", palavra);
    tamanho=strlen(palavra);
    
    for(i=0; i<tamanho; i++){
        palavrainv[i]=palavra[tamanho-i-1];
    }
    palavrainv[tamanho]='\0';
    if(strcmp(palavra,palavrainv)==0){ // são iguais!!
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }
    return 0;
}