#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct {
    int dia,mes;
} Data;
typedef struct {
    char nome[40],telefone[12];
    Data aniversario;
} Contato;

int main(){
    Contato vet[5], *ptrVet=vet;
    int opc=0, posAtual=0; 
    //ler o arquivo bin para carregar os contatos ja escritos
    do {
        printf("====Menu Programa====\n");
        printf("1 - Inserir contato.\n");
        printf("2 - Remover contato.\n");
        printf("3 - Pesquisar contato pelo nome.\n");
        printf("4 - Listar todos os contatos.\n");
        printf("5 - Listar contatos com a letra inicial.\n");
        printf("6 - Sair\n");
        printf(">> ");
        scanf("%d",&opc);

        switch (opc) {
        case 1:
            printf("Insira o nome do contato: ");
            scanf("%[^\n]s",(ptrVet+posAtual)->nome);
            printf("Insira o telefone do contato: ");
            scanf("%[^\n]s",(ptrVet+posAtual)->telefone);
            printf("Insira a data de aniversario: ");
            scanf("%d",&(ptrVet+posAtual)->aniversario.dia);
            scanf("%d",&(ptrVet+posAtual)->aniversario.dia);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        default:
            break;
        }
    } while (opc!=6);
   
    return 0;
}   