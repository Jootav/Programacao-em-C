#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *file=fopen("saida.txt","a");
    char Nome[30],Telefone[30];
    do {
        scanf(" %[^\n]s",Nome);
        scanf(" %[^\n]s",Telefone);
        if((strcmp(Telefone,"0"))!=0){
            fprintf(file,"Nome: %s | Telefone: %s\n", Nome, Telefone);
        }
    } while ((strcmp(Telefone,"0"))!=0);
    fclose(file);
    return 0;
}