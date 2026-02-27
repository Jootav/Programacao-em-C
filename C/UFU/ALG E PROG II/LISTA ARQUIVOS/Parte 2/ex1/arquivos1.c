#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    FILE *file;
    
    file=fopen("../arq.txt","w");
    if(file==NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    do {
        scanf("%c",&ch);
        if(ch!='0')
            fputc(ch,file);
    } while (ch!='0');
    fclose(file);
    
    file=fopen("../arq.txt","r");
    if(file==NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    while(!feof(file)){
        printf("%c",fgetc(file));
    }
    fclose(file);

    return 0;
}