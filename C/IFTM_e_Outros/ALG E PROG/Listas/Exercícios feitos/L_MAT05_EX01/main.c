#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#define tam1 10
#define tam2 10

/*
===

L_mat05_ex01 - Elaborar um algoritmo em linguagem C, que permita criar duas matrizes A e B de dimensão 50x50 para receber
números inteiros.
Após a criação das matrizes, inicializar as duas com zeros.
Permitir que o usuário digite a quantidade de linhas e de colunas ele deseja trabalhar validando corretivamente para que o
número de linhas seja diferente do número de colunas bem como os valores devem ser maiores que ou igual 2 e menores ou igual a
50.
Obs.: usar a diretiva #define para definir as dimensões de linhas e colunas da matriz ... isso facilita os testes e simulações.
 Criar as seguintes funções:
 Uma função para receber o conteúdo da matriz, esta função, deverá receber como parâmetro a matriz, a quantidade de
linha e a quantidade de colunas;
 Função para a entrada da quantidade de linha e coluna e para serem diferentes e entre 2 e 50;
 função para processar a criação da matriz B que é a transposta de A.
 função para mostrar as matrizes (claro que uma e depois a outra).
 dentro do código principal deverá ter:
a) Um laço principal para que o usuário possa voltar e testar com outras dimensões e conteúdos;
b) Receber a entrada da quantidade de linhas e colunas e a chamada da função de validar;
c) A chamada da função para receber o conteúdo da matriz na dimensão que o usuário determinou;
d) A chamada da função para mostrar a matriz em sua forma de entrada;
e) A chamada da função para criar a transposta de A;
f) A chamada da função mostrar a matriz transposta;
g) Receber a opção se o cliente deseja executar novamente << s >> ou << n >> com sua validação corretiva.


===
*/

//===


//===

//VALIDAÇÃO ENTRADA QTD LIN E COL
void validar_lincol(int *lin, int *col)
{
    while(*lin < 2 || *lin > 10)
    {
        printf("\n Insira outra qtd de linhas (entre 2 e 50): ");
        fflush(stdin);
        scanf("%d", &*lin);
    }
    while(*col < 2 || *col > 10)
    {
        printf("\n Insira outra qtd de coluna (entre 2 e 50): ");
        fflush(stdin);
        scanf("%d", &*col);
    }
    while(*lin==*col)
    {
        printf("\n Linhas e colunas iguais. Insira outra qtd linha: ");
        fflush(stdin);
        scanf("%d", &*lin);

        printf("\n Insira outra qtd coluna: ");
        fflush(stdin);
        scanf("%d", &*col);
    }
}
//FUNCAO ENTRADA QTD LIN E COL
void entrada_lincol(int *lin, int *col)
{
    printf("\n Insira a qtd de linhas: ");
    fflush(stdin);
    scanf("%d", &*lin);

    printf("\n Insira a qtd de colunas: ");
    fflush(stdin);
    scanf("%d", &*col);

    validar_lincol(&*lin, &*col);
}
//FUNCAO RECEBER CONTEUDO MATRIZ
void receber_conteudo(int matA[][tam2], int lin, int col)
{
    int i, j, l, k;
    i=j=l=k=0;

    i=0;
    while(i<lin)
    {
        j=0;
        while(j<col)
        {
            matA[i][j]= rand() % (tam1*tam2);
            printf("\n Matriz[%d][%d] = %d", i, j, matA[i][j]);
            if(matA[i][j] == 0)
            {
                printf("\n Zero invalido, gerar outro: ");
                j--;
            }
            Sleep(50);
            j++;
        }
        i++;
    }
}
//FUNCAO CRIACAO DE B (TRANSPOSTA DE A)
void matriz_trans(int matA[][tam2], int matB[][tam2], int lin, int col)
{
    int i, j, l, k, aux;
    i=j=l=k=0;

    i=0;
    while(i<lin)
    {
        j=0;
        while(j<col)
        {
            matB[j][i]=matA[i][j];
            j++;
        }
        i++;
    }
}
//FUNCAO MOSTRAR MATRIZES
void mostrar_matriz(int mat[][tam2], int lin, int col)
{
    int i, j;
    i=j=0;
    i=0;
    while(i<lin)
    {
        j=0;
        while(j<col)
        {
            printf("%6d", mat[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

//===

int main()
{
    //CRIACAO DE VARIAVEIS
    int matA[tam1][tam2], matB[tam1][tam2];
    int i, j, l, k, lin, col;
    char opc;

    //INICIALIZAÇÃO
    i=j=l=k=lin=col=0;
    opc="s";
    //ZERAR MATRIZES
    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            matA[i][j]=0;
            matB[i][j]=0;
            j++;
        }
        i++;
    }

    while(opc != 'n' && opc != 'N')
    {
        system("cls");
        i=j=l=k=lin=col=0;

        i=0;
        while(i<tam1)
        {
            j=0;
            while(j<tam2)
            {
                matA[i][j]=0;
                matB[i][j]=0;
                j++;
            }
            i++;
        }

        entrada_lincol(&lin, &col);
        receber_conteudo(matA, lin, col);
        printf("\n\n Matriz A em sua forma de entrada: \n");
        mostrar_matriz(matA, lin, col);
        matriz_trans(matA, matB, lin, col);
        printf("\n\n Matriz B (transposta de A): \n");
        mostrar_matriz(matB, col, lin);

        printf("\n\n Deseja fazer o processo novamente?");
        printf("\n <<s>> para sim || <<n>> para nao || R: ");
        fflush(stdin);
        scanf("%c", &opc);
    }


    //printf("\no valor de lin [%d]", lin);
    //printf("\no valor de col [%d]", col);

}
