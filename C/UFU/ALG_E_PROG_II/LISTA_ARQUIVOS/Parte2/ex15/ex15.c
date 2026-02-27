#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *in=fopen("entrada.txt","r");
    FILE *out=fopen("saida.txt","w");
    char nome[40];
    int anoCorrente, anoPessoa;

    if(in==NULL)
        printf("erro ao abrir o arquivo!\n");
    if(out==NULL)
        printf("erro ao abrir o arquivo!\n");

    printf("Digite o ano atual: "); scanf("%d",&anoCorrente);
    
    while(fscanf(in," %[^|]|%d", nome, &anoPessoa)==2){
        if((anoCorrente-anoPessoa)<18){
            fprintf(out,"%s é menor de idade.\n",nome);
        } else if ((anoCorrente-anoPessoa)>18) {
            fprintf(out,"%s é maior de idade.\n",nome);
        } else {
            fprintf(out,"%s está entrando na maior idade.\n",nome);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}