#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch,c;
    int contLetras=0;
    FILE *file;
    file=fopen("../palavras_computacao.txt","r");

    if(file==NULL){
        printf("erro ao abrir o arquivo.\n");
        exit(1);
    }
    scanf(" %c",&c);
    while(!feof(file)){
        if((ch=fgetc(file))==c)
            contLetras++;
    }
    printf("esse arquivo tem %d %c's\n",contLetras,c);
    return 0;
    fclose(file);
}