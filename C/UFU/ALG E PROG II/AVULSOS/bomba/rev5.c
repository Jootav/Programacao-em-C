#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int split(char *str, char **tokens, int max_tokens){
    int i,j,contador=0,flag=1; // a flag entra ligada para pegar a primeira palavra
    for(i=0;str[i]!='\0' && contador<max_tokens;i++){
        if(str[i] == ' '){// se encontrarmos um espaço, substituir por \0
            str[i]='\0';// o \0 serve pra delimitar a primeiro palavra (o primeiro endereço até o proximo \0)
            flag=1;
        }
        else if(flag==1){ // se encontramos um \0 e logo depois uma palavra, pegue seu endereço
            tokens[contador]=&str[i];
            contador++;
            flag=0;
        }
    }
    return contador;
}

int main() {
    int qtd,tamanho=50;
    char frase[]="o rato roeu a roupa do rei de roma",*vetEnderecos[tamanho];
    qtd=split(frase,vetEnderecos,tamanho);
    for(int i=0;i<qtd;i++){
        printf("palavra[%d] = %s\n",i+1,vetEnderecos[i]);
    }
}
