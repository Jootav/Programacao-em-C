#include<stdio.h>
#include<stdlib.h>

int main (){
    char c;
    int cont=0;
    FILE *file1=fopen("../entrada.txt","r"), *file2=fopen("saida.txt","w");

    while((c=fgetc(file1))!=EOF){
        if(c=='e')
            c='3';
        fputc(c,file2);
    }
    
    fclose(file1);
    fclose(file2);
    return 0;
}
