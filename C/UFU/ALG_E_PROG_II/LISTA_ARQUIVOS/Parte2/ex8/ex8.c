#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char arquivo[20],ch;
    FILE *arquivoEnt,*arquivoSai;
    scanf(" %s",arquivo);
    arquivoEnt=fopen(arquivo,"r");
    if(arquivoEnt==NULL)
        printf("erro ao abrir o arquivo!\n");
    scanf(" %s",arquivo);
    arquivoSai=fopen(arquivo,"w");

    while((ch=fgetc(arquivoEnt))!=EOF){
        if(ch>=97 && ch<=122)
            ch=toupper(ch);
        fputc(ch,arquivoSai);
    }
    fclose(arquivoEnt); fclose(arquivoSai); 
    return 0;
}