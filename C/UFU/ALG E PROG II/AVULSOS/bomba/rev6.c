#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 5

typedef struct {
    char nome[50]; float nota;
} Aluno;

void ordernar_alunos(Aluno *inicio, Aluno *fim){
    Aluno aux;
    for(int j=0;j<tam-1;j++)
        for(int i=0;i<tam-j-1;i++){
            if((inicio+i)->nota < (inicio+i+1)->nota){
                aux=*(inicio+i);
                *(inicio+i)=*(inicio+i+1);
                *(inicio+i+1)=aux;
            }
        }
}

int main() {
    Aluno vet[tam],*pontVet;
    pontVet=vet;

    for(int i=0;i<tam;i++){
        scanf(" %[^\n]s",(pontVet+i)->nome);
        scanf("%f",&(pontVet+i)->nota);
    }
    ordernar_alunos(pontVet,pontVet+(tam-1));
    for(int i=0;i<tam;i++){
        printf("%s %.2f\n",(pontVet+i)->nome, (pontVet+i)->nota);
    }
}
