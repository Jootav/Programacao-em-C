#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>

//João Victor Barbosa Marques - 10150037619 - Engenharia da Computação - 03/12/2024

#define tam1 2
#define tam2 10

void relatorio_inativas (char mat[][tam2][50], int vet[tam2], int i_atual, int j_atual, int c, int c_inativas)
{
    int l,k;
    l=k=0;
    if(c == 0)
    {
        printf("\n Ainda nao foi inserido nenhum produto. Pressione qualquer tecla para voltar ao menu... ");
    }
    else
    {
        if(c_inativas != 0)
        {
            printf("\n Relatorio dos produtos INATIVOS. \n");
            l=0;
            while(l<tam1-1)
            {
                k=0;
                while(k<tam2)
                {
                    if(strcmp(mat[1][k], "I") == 0 || strcmp(mat[1][k], "i") == 0)
                    {
                        printf("\n Produto: %s", mat[l][k]);
                        printf("\n Status: %s", mat[1][k]);
                        printf("\n Quantidade no estoque: %d \n\n", vet[k]);
                    }
                    k++;
                }
                printf("\n ");
                l++;
            }
        }
        else
        {
            printf("\n Nao ha produtos inativos. Pressione qualquer tecla para voltar ao menu... ");
        }
    }
    getch();
}

//

void relatorio_ativas(char mat[][tam2][50], int vet[tam2], int i_atual, int j_atual, int c, int c_ativas)
{
    int l,k;
    l=k=0;
    if(c == 0)
    {
        printf("\n Ainda nao foi inserido nenhum produto. Pressione qualquer tecla para voltar ao menu... ");
    }
    else
    {
        if(c_ativas != 0)
        {
            printf("\n Relatorio dos produtos ATIVOS. \n");
            l=0;
            while(l<tam1-1)
            {
                k=0;
                while(k<tam2)
                {
                    if(strcmp(mat[1][k], "A") == 0 || strcmp(mat[1][k], "a") == 0)
                    {
                        printf("\n Produto: %s", mat[l][k]);
                        printf("\n Status: %s", mat[1][k]);
                        printf("\n Quantidade no estoque: %d \n\n", vet[k]);
                    }
                    k++;
                }
                printf("\n ");
                l++;
            }
        }
        else
        {
            printf("\n Nenhum produto ativo. Pressione qualquer tecla para voltar ao menu... ");
        }
    }
    getch();
}

//

void validar_qtd_venda(char produto[50], int qtd, char mat[][tam2][50], int vet[tam2])
{
    int l, k;
    l=k=0;

    l=0;
    while(l<tam1-1)
    {
        k=0;
        while(k<tam2)
        {
            if(strcmp(mat[l][k], produto) == 0)
            {
                if(qtd > vet[k])
                {
                    printf("\n Valor maior que o estoque oferece. Pressione qualquer tecla para voltar ao menu... ");
                    getch();
                }
                else
                {
                    if(qtd <= 0)
                    {
                        printf("\n Quantidade invalida de venda. Pressione qualquer tecla para voltar ao menu... ");
                        getch();
                    }
                    else
                    {
                        printf("\n Vendendo %d unidades do produto...", qtd);
                        vet[k]=vet[k]-qtd;
                    }
                }
            }
            k++;
        }
        l++;
    }
}

//

void validar_qtd (int *num)
{
    while(*num <= 0)
    {
        printf("\n Insira numero valido (positivo e diferente de zero): ");
        fflush(stdin);
        scanf("%d", &*num);
    }
}

//

void excluir_merc(char mat[][tam2][50], int vet[tam2], int *i_atual, int *j_atual, int *c, int *c_inativas, int *c_ativas)
{
    int k, l, existe, contador, pos_k;
    char produto[50];

    strcpy(produto, "");
    k=l=pos_k=existe=0;
    contador=1;

    printf("\n Exclusão de produto: ");
    printf("\n Digite o nome do produto: ");
    fflush(stdin);
    scanf("%s", &produto);
    //verificar vazio
    while(strcmp(produto, "") == 0)
    {
        printf("\n Nome vazio, insira nome valido: ");
        fflush(stdin);
        scanf("%s", &produto);
    }

    l=0;
    while(l<tam1-1)
    {
        k=0;
        while(k<tam2)
        {
            if(strcmp(mat[l][k], produto) == 0) // SE DOIS NOMES FOREM IGUAIS, PRODUTOS EXISTE
            {
                existe++;
                pos_k = k;
                contador = *c;
            }
            contador++;
            k++;
        }
        l++;
    }

    //existe == 1 -> tem no estoque
    if(existe != 1)
    {
        printf("\n Produto nao existe no estoque. Pressione qualquer tecla para voltar ao menu... ");
        getch();
    }
    else
    {
        if(vet[pos_k] > 0)
        {
            printf("\n Produto nao pode ser excluido. Estoque restante. Pressione qualquer tecla para voltar ao menu... ");
            getch();
        }
        else
        {
            printf("\n Venda feita! Estoque atualizado. ");
            (*c_inativas)++;
            (*c_ativas)--;
            strcpy(mat[1][pos_k], "I");
        }
    }
}

//

void vender_merc (char mat[][tam2][50], int vet[tam2], int *i_atual, int *j_atual, int *c)
{
    int k, l, qtd_venda, existe, contador;
    char produto[50];

    strcpy(produto, "");
    k=l=existe=qtd_venda=0;
    contador=1;

    printf("\n Venda de produto: ");
    printf("\n Digite o nome do produto: ");
    fflush(stdin);
    scanf("%s", &produto);
    //verificar vazio
    while(strcmp(produto, "") == 0)
    {
        printf("\n Nome vazio, insira nome valido: ");
        fflush(stdin);
        scanf("%s", &produto);
    }

    l=0;
    while(l<tam1-1)
    {
        k=0;
        while(k<tam2)
        {
            if(strcmp(mat[l][k], produto) == 0) // SE DOIS NOMES FOREM IGUAIS, PRODUTOS EXISTE
            {
                existe++;
                contador = *c;
            }
            contador++;
            k++;
        }
        l++;
    }

    //existe == 1 -> tem no estoque
    if(existe != 1)
    {
        printf("\n Produto nao existe no estoque. Pressione qualquer tecla para voltar ao menu... ");
        getch();
    }
    else
    {
        printf("\n Digite a quantidade da venda: ");
        fflush(stdin);
        scanf("%d", &qtd_venda);
        validar_qtd_venda(produto, qtd_venda, mat, vet);
    }
}

//

void cadastrar_merc (char mat[][tam2][50], int vet[tam2], int *i_atual, int *j_atual, int *c, int *c_ativas)
{
    int k, l, existe, contador;
    k=l=existe=0;
    contador=1;

    printf("\n Cadastro de produto: ");
    printf("\n Digite o nome do produto: ");
    fflush(stdin);
    gets(mat[*i_atual][*j_atual]);
    //verificar vazio
    while(strcmp(mat[*i_atual][*j_atual], "") == 0)
    {
        printf("\n Nome vazio, insira nome valido: ");
        fflush(stdin);
        gets(mat[*i_atual][*j_atual]);
    }
    (*c)++;

    if(*j_atual != 0) // SE NAO FOR O PRIMEIRO VALOR A SER INSERIDO, OLHAR PARA TRAS
    {
        l=0;
        while(l<tam1-1 && contador < (*c))
        {
            k=0;
            while(k<tam2 && contador < (*c))
            {
                if(strcmp(mat[l][k], mat[*i_atual][*j_atual]) == 0) // SE DOIS NOMES FOREM IGUAIS, PRODUTOS JA EXISTE
                {
                    existe++;
                    (*c)--;
                    contador = *c;
                }
                contador++;
                k++;
            }
            l++;
        }
    }
    //existe == 1 -> tem no estoque
    if(existe == 1)
    {
        printf("\n Produto ja existe no estoque. Pressione qualquer tecla para voltar ao menu... ");
        strcpy(mat[*i_atual][*j_atual], "");
        getch();
    }
    else
    {
        printf("\n Digite a quantidade de produto para cadastrar: ");
        fflush(stdin);
        scanf("%d", &vet[*j_atual]);
        validar_qtd(&vet[*j_atual]);
        strcpy(mat[*i_atual+1][*j_atual], "A");
        (*c_ativas)++;
    }
}

//
int main()
{
    char mat_merc[tam1][tam2][50];
    int vet_merc[tam2];

    int i, j, l, k, opc, opc_cad;
    int estoque, vez, contador;
    int c_inativas, c_ativas;

    i=j=l=k=opc=0;
    vez=1;
    contador=0;
    c_inativas=c_ativas=0;

    //ZERAR MATRIZ
    for(i=0; i<tam1; i++)
        for(j=0; j<tam2; j++)
            strcpy(mat_merc[i][j], "");

    //ZERAR VETOR
    for(j=0; j<tam2; j++)
        vet_merc[i]=0;

    //ZERAR VARIAVEIS
    i=j=l=k=opc=0;
    vez=1;

    //MENU
    while(opc!=6)
    {
        system("cls");
        printf("\n MENU DE OPCOES");
        printf("\n 1 - Cadastrar mercadoria");
        printf("\n 2 - Excluir mercadoria do estoque (inativar)");
        printf("\n 3 - Vender mercadoria");
        printf("\n 4 - Relatorio mercadoria em estoque (ativas)");
        printf("\n 5 - Relatorio mercadoria excluidas (inativas)");
        printf("\n 6 - Finalizar programa");
        printf("\n Informe uma das opcoes: ");
        fflush(stdin);
        scanf("%d", &opc);

        while(opc < 1 || opc > 6)
        {
            printf("\nInsira uma opcao valida (entre 1 e 6): ");
            fflush(stdin);
            scanf("%d", &opc);
        }

        if(opc==6)
        {
            printf("\n\nFinalizando programa...\n\n");
        }
        else
        {
            if(opc==1)
            {
                cadastrar_merc(mat_merc, vet_merc, &i, &j, &contador, &c_ativas); // CONTADOR SERVE PRA CONTAR QUANTOS PRODUTOS FORAM COLOCAODS
                j++;
            }
            else
            {
                if(opc==2)
                {
                    excluir_merc(mat_merc, vet_merc, &i, &j, &contador, &c_inativas, &c_ativas);
                }
                else
                {
                    if(opc==3)
                    {
                        vender_merc(mat_merc, vet_merc, &i, &j, &contador);
                    }
                    else
                    {
                        if(opc==4)
                        {
                            relatorio_ativas(mat_merc, vet_merc, i, j, contador, c_ativas);
                        }
                        else
                        {
                            relatorio_inativas(mat_merc, vet_merc, i, j, contador, c_inativas);
                        }
                    }
                }
            }
        }
    }
}
