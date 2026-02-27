/*
    INSERÇÃO e EXCLUSÃO DE CONTEÚDO NO VETOR

Elaborar um Algoritmo que crie um vetor do tipo inteiro de dimensão 100. Preencher somente as 50 (cinco) primeiras posições com números randômicos (não se esquecer de ativar a semente do cronômetro com a função srand(time(NULL))).
    • Validar corretivamente durante o preenchimento para NÃO ter número 0 (zero) e NÃO ter números repetidos.

FUNÇÕES:
    1) Função para preencher até a metade da quantidade de linhas do vetor;
    2) Função para validar corretivamente durante a entrada para não ter zero e não ter números repetidos;
    3) Função para ordenar o vetor em ordem crescente;
    4) Função para mostrar o vetor até a posição em que está sendo utilizada;
    5) Função para pesquisar no vetor a existência ou não do número a ser inserido ou excluído;
    6) Função para receber o números de pesquisa e validar corretivamente não menor 1 (um).
OBSERVAÇÃO:
    1) Será utilizada apenas um vetor para inserção e/ou exclusão (proibido uso de outro vetor);
    2) só criar o menu após preencher e ordenar o vetor até a posição em que foi preenchida.

APÓS O PREENCHIMENTO, criar um Menu conforme abaixo.


				MENU DE OPÇÕES
				================
		1 – INSERIR NUMERO
		2 – EXCLUIR NUMERO
		3 – SAIR
		Escolha o número de uma das opções acima...: _


Opçao1:
    a) Mostrar vetor;
    b) Receber um número, pesquisar se ele existe no vetor, caso exista dar uma mensagem mostrando sua posição ele está e permitir que volte ao menu principal;
    c) Caso contrário (não exista), localizar a posição onde será inserido em sua ordem crescente, e depois passar todos os números para frente liberando o espaço para inclusão. Porém, antes de fazer a inclusão, verificar se existe espaço vazio no vetor;
    d) Proibido alocar o número na última após a última posição utilizada e mandar re-ordenar o vetor. A inclusão deve ser feita passando os números para as posições seguintes liberando o espaço o qual será inserido.

Opção2:
    a) Mostra vetor;
    b) Receber um número, pesquisar se ele existe no vetor, caso NÃO exista dar uma mensagem e permitir que volte ao menu principal.
    c) Caso contrário (exista), localizar a posição e fazer a exclusão, ou seja, trazer os números que estão a sua frente e zerando a última posição para que possa ser  utilizada.

    Prof. Ernani Cláudio Borges
    data: 29/10/2024
==============================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>

#define tam 20


//==============================================================
//============ LOCAL PARA DECLARAR PROTÓTIPOS ==================
//==============================================================





//==============================================================
//============ LOCAL CRIAR OS MODULOS DE FUNCOES ===============
//==============================================================

//==============================================================

//==============================================================
void progressao()
{
    int i;
    for (i=0; i<50; i++)
    {
        printf ("%c", 178);
        Sleep(50);
    }
}
//==============================================================
int localizar(int v[], int i_atual, int nr)
{
    int i = 0;
    while (i < i_atual && nr > v[i])
        i++;

    return (i);
}
//==============================================================
int pesquisar_vetor(int v[], int i_atual, int nr, int *j)
{
    int ok;
    ok = 0;
    while (*j < i_atual && v[*j] != nr)
        (*j)++;

    if (*j < i_atual)
        ok++;

    return (ok);
}
//==============================================================
void receber_numero (int *nr)
{
    printf ("\n\n digite numero (positivo) para pesquisa ...: ");
    do
    {
        fflush(stdin);
        scanf ("%d", &*nr);
        if (*nr <= 0)
            printf ("\n numero invalido ... digite outro nr positivo ...: ");

    }
    while (*nr <= 0);
}
//==============================================================
void ordenar_vetor (int v[], int i_atual)
{
    int i, aux, j;
    i = j = aux = 0;

    while (j < i_atual)
    {
        i = 0;
        while (i < i_atual - 1)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
            i++;
        }
        j++;
    }

}
//==============================================================
void mostrar_vetor(int v[], int i_atual)
{
    int i;
    i=0;

    printf ("\n\n Conteudo do vetor \n\n");
    while (i<i_atual)
    {
        printf ("%6d", v[i]);
        if (i>0 && (i+1) % 10 == 0)
            printf ("\n");

        Sleep(50);
        i++;
    }
}
//==============================================================
void validar_vetor(int v[], int *i)
{
    int j;
    if (v[*i] == 0)
    {
        printf ("\n zero invalido ... gerar outro ...");
        (*i)--;
    }
    else
    {
        j=0;
        while (j<*i && v[j] != v[*i])
            j++;

        if (j < *i)
        {
            printf ("\n numero repetido no indice %d ... gerar outro ...", j);
            (*i)--;
        }
    }
}
//==============================================================
int preencher_vetor(int v[])
{
    int i;
    i=0;
    while (i<tam/2)
    {
        v[i] = rand() % (tam*10);
        printf ("\n vetor[%d] = %d ", i, v[i]);
        //validar
        validar_vetor(v, &i);

        i++;
    }
    return(i);
}
//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    int vet[tam], i, i_atual, opc, nr, ok, j;

    //inicializar vars
    for (i=0; i<tam; i++)
        vet[i] = 0;

    i_atual = opc = ok = 0;

    //preencher vetor
    i_atual = preencher_vetor(vet);

    //ORDENAR o vetor
      ordenar_vetor(vet, i_atual);

    while (opc != 3)
    {
        nr = 0;
        system ("cls");

        mostrar_vetor(vet, i_atual);

        printf ("\n\n     MENU PRINCIPAL");
        printf ("\n     ============== \n");
        printf ("\n 1) inserir numero no vetor");
        printf ("\n 2) excluir numero no vetor");
        printf ("\n 3) sair (finalizar programa");
        printf ("\n\n digite uma das opcoes ...: ");
        do
        {
            fflush(stdin);
            scanf ("%d", &opc);
            if (opc < 1 || opc > 3)
                printf ("\n opcao invalida ... digite 1, 2 ou 3 para finalizar ...: ");

        }while (opc < 1 || opc > 3);

        if (opc == 3)
            printf ("\n\n finalizando ... ");
        else
        {
            if (opc == 1)
            {
                printf ("\n\n opcao 1 - Inserir numero no vetor");

                receber_numero(&nr);

                //pesquisar
                printf ("\n\n aguarde ... pesquisar numero no vetor ... \n\n");

                j = ok = 0;
                ok = pesquisar_vetor(vet, i_atual, nr, &j);
                if (ok == 1)
                    printf ("\n\n numero existe na posicao %d ", j+1);
                else
                {
                    printf ("\n\n numero nao existe no vetor ... aguarde ... \n verificando espaco no vetor\n\n");

                    if (i_atual == tam)
                    {
                        printf ("\n\n vetor esta cheio ... \n\n ");
                    }
                    else
                    {
                        printf ("\n\n aguarde ... locazando posicao para inserir ... \n\n");;
                        j = localizar(vet, i_atual, nr);

                        printf ("\n\n aguarde ... inserindo ... \n\n");
                        progressao();
                        //mover numero para frente
                        i = i_atual;
                        while (i > j)
                        {
                            vet[i] = vet[i-1];
                            i--;
                        }
                        vet[j] = nr;
                        i_atual++;

                        printf ("\n\n Numero inserido com sucesso ...");

                        mostrar_vetor(vet, i_atual);
                    }
                }
            }
            else
            {
                printf ("\n\n opcao 2 - Excluir numero do vetor");

                receber_numero(&nr);

                //pesquisar
                printf ("\n\n aguarde ... pesquisar numero no vetor ... \n\n");
                progressao();

                j = ok = 0;
                ok = pesquisar_vetor(vet, i_atual, nr, &j);
                if (ok == 0)
                    printf ("\n\n numero NAO existe no vetor\n\n");
                else
                {
                    printf ("\n\n numero existe no vetor na posicao %d ... \n aguarde exclusao ... \n\n", j+1);
                    progressao();
                    //mover numero para tras
                    i = j;
                    while (i < i_atual)
                    {
                        vet[i] = vet[i+1];
                        i++;
                    }
                    vet[i_atual] = 0;
                    i_atual--;

                    printf ("\n\n Numero EXCLUIDO com sucesso ...\n\n");

                    mostrar_vetor(vet, i_atual);
                }
            }
            printf ("\n\n\n Pressione QUALQUER tecla para voltar ao menu principal ... ");
            getch();
        }
    }

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
