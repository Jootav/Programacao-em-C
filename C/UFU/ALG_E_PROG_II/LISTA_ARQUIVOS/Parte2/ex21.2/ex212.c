#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct {
    char nome[40];
    int notaFinal;
} Aluno;

int main(){
    FILE *in=fopen("../ex21/entrada.txt","r"), *out=fopen("../ex21/saida.bin","rb");
    char auxNome[40]; int auxQtdAlunos;
    int maiorNota=-1,indMaior;

    fscanf(in,"DISCIPLINA: %s ALUNOS: %d", auxNome, &auxQtdAlunos);
    Aluno aux;
    for(int i=0;i<auxQtdAlunos;i++){
        fread(&aux,sizeof(Aluno),1,out);
        if((aux.notaFinal)>maiorNota){
            maiorNota=aux.notaFinal;
            strcpy(auxNome,aux.nome);
        }
    }

    printf("A maior nota foi de %d do aluno %s",maiorNota,auxNome);
    fclose(in); fclose(out); 
    return 0;
}   