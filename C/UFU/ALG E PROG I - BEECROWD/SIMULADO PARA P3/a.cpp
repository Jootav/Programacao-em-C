#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    char frase[101],frase_invertido[101];
    int i,j,c;
    scanf(" %[^\n]s",frase);
    int tamanho=strlen(frase);
    for(i=0;frase[i]!='\0';i++){
        frase_invertido[i]=frase[tamanho-1-i];
    }
    frase_invertido[tamanho]='\0';
    
    if(strcmp(frase_invertido,frase)==0){
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }
    return 0;
}