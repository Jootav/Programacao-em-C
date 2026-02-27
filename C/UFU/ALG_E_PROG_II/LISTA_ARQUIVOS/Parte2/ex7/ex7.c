#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch,c;
    int contLetras=0;
    FILE *fileEnt,*fileSai;
    fileEnt=fopen("../palavras_computacao.txt","r");
    fileSai=fopen("../palavras_computacaoSaida.txt","w");

    if(fileEnt==NULL){
        printf("erro ao abrir o arquivo.\n");
        exit(1);
    }
    while(!feof(fileEnt)){
        ch=fgetc(fileEnt);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            ch='*';
        fputc(ch,fileSai);
    }
    fclose(fileEnt); fclose(fileSai); 
    return 0;
}