#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    int contLinhas=0,contVogais=0,contConsoa=0;
    FILE *file;
    
    file=fopen("../palavras_computacao.txt","r");
    if(file==NULL){
        printf("erro ao abrir o arquivo.\n");
        exit(1);
    }
    while(!feof(file)){
        if((ch=fgetc(file))=='\n')
            contLinhas++;
        if((ch=fgetc(file))=='a'||(ch=fgetc(file))=='e'||(ch=fgetc(file))=='i'||(ch=fgetc(file))=='o'||(ch=fgetc(file))=='u')
            contVogais++;
        else
            contConsoa++;
    }
    printf("esse arquivo tem %d linhas\n",contLinhas);
    printf("esse arquivo tem %d vogais\n",contVogais);
    printf("esse arquivo tem %d consoantes\n",contConsoa);
    return 0;
    fclose(file);
}