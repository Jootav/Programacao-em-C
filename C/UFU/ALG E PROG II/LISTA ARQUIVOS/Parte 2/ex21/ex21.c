#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct {
    char nome[40];
    int notaFinal;
} Aluno;

int main(){
    FILE *in=fopen("entrada.txt","r"), *out=fopen("saida.bin","wb");
    char auxNome[40]; int auxQtdAlunos;
    int maiorNota=-1;

    if(in==NULL||out==NULL){
        printf("erro ao abrir o arquivo!\n");
        exit(1);
    }
        
    fscanf(in,"DISCIPLINA: %s ALUNOS: %d", auxNome, &auxQtdAlunos);

    Aluno *ptrEstrutura;
    ptrEstrutura=(Aluno *) calloc (auxQtdAlunos,sizeof(Aluno));

    for(int i=0;i<auxQtdAlunos;i++){
        scanf(" %[^\n]",(ptrEstrutura+i)->nome); 
        (ptrEstrutura+i)->notaFinal=rand()%11; 
    }
    fwrite(ptrEstrutura, sizeof(Aluno), auxQtdAlunos, out);
    
    free(ptrEstrutura);
    fclose(in); fclose(out); 
    return 0;
}   