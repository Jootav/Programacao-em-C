#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *in=fopen("entrada.txt","r"), *out=fopen("saida.txt","w");
    if(in==NULL)
        printf("erro ao abrir o arquivo!\n");
    char auxNome[40]; int auxQtdAlunos;
    int *ptrVetNota; char **ptrVetAlunos;

    fscanf(in,"DISCIPLINA: %s ALUNOS: %d", auxNome, &auxQtdAlunos);
    ptrVetNota=(int *) calloc (auxQtdAlunos,sizeof(int));
    ptrVetAlunos=(char **) calloc(auxQtdAlunos,sizeof(char *));
    for(int i=0; i<auxQtdAlunos; i++) {
        ptrVetAlunos[i]=(char *) calloc (41,sizeof(char));
    }
    
    for(int i=0;i<auxQtdAlunos;i++){
        scanf(" %[^\n]s",ptrVetAlunos[i]); 
        ptrVetNota[i]=rand()%11; 
    }
    for(int i=0;i<auxQtdAlunos;i++){
        fprintf(out,"NOME: %s",ptrVetAlunos[i]);
        int cont=strlen(ptrVetAlunos[i]);
        while(cont<=40){
            fputc(' ',out);
            cont++;
        }
        fprintf(out,"| NOTA: %d\n",ptrVetNota[i]);
    }
    for (int i=0; i<auxQtdAlunos; i++){
        free(ptrVetAlunos[i]);
    }
    free(ptrVetAlunos); free(ptrVetNota);
    fclose(in); fclose(out); 
    return 0;
}   