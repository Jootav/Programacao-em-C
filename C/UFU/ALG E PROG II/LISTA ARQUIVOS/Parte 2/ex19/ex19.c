#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *in=fopen("entrada.txt","r");
    int maiorNota=-1, nota;
    char alunoMaiorNota[30], nome[30];

    while(fscanf(in, "NOME: %s NOTA: %d ", nome, &nota)==2){
        if(nota > maiorNota){
            maiorNota=nota;
            strcpy(alunoMaiorNota,nome);
        }
    }
    printf("a maior nota e de %d do aluno %s\n",maiorNota,alunoMaiorNota);
    fclose(in);
    return 0;
}   