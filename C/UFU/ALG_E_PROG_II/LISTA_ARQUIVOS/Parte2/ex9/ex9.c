#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char ch;
    FILE *file1,*file2,*file3;
    file1=fopen("../entrada.txt","r");
    file2=fopen("../palavras_computacao.txt","r");
    file3=fopen("saida.txt","w");

    while((ch=fgetc(file1))!=EOF){
        fputc(ch, file3);
    }
    fprintf(file3,"\n");
    while((ch=fgetc(file2))!=EOF){
        fputc(ch, file3);
    }
        
    return 0;
}