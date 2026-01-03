#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    double nota1,nota2;
} Aluno ;

float calcular_media_valor(double nota1, double nota2) {
    double media_notas;
    media_notas=(nota1+nota2)/2;
    return media_notas;
}

void mostra_dados (Aluno *vet, int tam) {
    int i,j;
    double media_nota;
    for(i=0;i<tam;i++){
        printf("ALUNO %d: %s, NOTA1: %.2lf NOTA2: %.2lf",i+1,vet[i].nome, vet[i].nota1, vet[i].nota2);
        printf(" MEDIA NOTA: %.2lf\n",calcular_media_valor(vet[i].nota1,vet[i].nota2));
    }
}

void atualizar_notas_referencia (double *nota1,double *nota2, double notaNova1, double notaNova2) {
    printf("NOTA ATUAL: \n");
    printf("NOTA1: %.2lf NOTA2: %.2lf ", *nota1, *nota2);
    printf("MEDIA NOTAS: %.2lf\n\n",calcular_media_valor(*nota1,*nota2));
    *nota1=notaNova1;
    *nota2=notaNova2;
    printf("NOTA NOVA: \n");
    printf("NOTA1: %.2lf NOTA2: %.2lf ", *nota1, *nota2);
    printf("MEDIA NOTAS: %.2lf\n\n",calcular_media_valor(*nota1,*nota2));
}

void cadastrar(Aluno *p) {
    printf("INSIRA NOME: ");
    scanf(" %[^\n]s",p->nome);
    printf("INSIRA NOTA1: ");
    scanf("%lf",&p->nota1);
    printf("INSIRA NOTA2: ");
    scanf("%lf",&p->nota2);
}

int menu () {
    int opc=0;
    printf("=========================\n");
    printf("Insira opc: \n");
    printf("1 - cadastrar \n");
    printf("2 - atualizar notas \n");
    printf("3 - mostrar dados \n");
    printf("4 - sair \n");
    scanf("%d",&opc);
    return opc;
}

int main()
{
    int i;
    char nome[50];
    double nota1,nota2;
    Aluno alunos[123];
    Aluno *p; // criando ponteiro do tipo struct Aluno
    p = alunos; // apontando para alunos

    int opc=0,cont=0;
    while(1){
        opc=menu();
        switch(opc){
            case 1:
                cadastrar(p+cont); 
                cont++;
                break;
            case 2:
                printf("INSIRA NOME: ");
                scanf(" %[^\n]s",nome);
                printf("INSIRA NOTA1 NOVA: ");
                scanf("%lf",&nota1);
                printf("INSIRA NOTA2 NOVA: ");
                scanf("%lf",&nota2);
                for(i=0;i<cont;i++){
                    if(strcmp(alunos[i].nome,nome)==0){
                        printf("ALUNO ENCONTRADO\n");
                        atualizar_notas_referencia(&alunos[i].nota1,&alunos[i].nota2,nota1,nota2);
                    }
                }
                break;
            case 3:
                mostra_dados(alunos,cont);
                break;
            case 4:
                return 0;
        }
    }
}
