#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *file=fopen("../entrada.txt","r");
    char ch;
    int contA=0,contE=0,contI=0,contLinha=0,contPalavras=0,contCaractere=0;

    while((ch=fgetc(file))!=EOF){
        contCaractere++;
       
        if(ch=='A'||ch=='a')
            contA++;
        if(ch=='E'||ch=='e')
            contE++;
        if(ch=='I'||ch=='i')
            contI++;
        if(ch==' '||ch=='\n'||ch=='\t')
            contPalavras++;
        if(ch=='\n')
            contLinha++;
    }
    printf("%d | %d | %d | %d | %d | %d\n",contA,contE,contI,contCaractere,contPalavras,contLinha);
    fclose(file);
    return 0;
}