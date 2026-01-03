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

Elaborar um algoritmo, escrito em Linguagem C, que permita criar uma matriz de dimensão 10x10.
 Inicializar com zero todas as posições.
Feito o processo de criação e inicialização, processar:
a) Preencher a primeira metade da quantidade de linhas da matriz, ou seja, preencher as 05 primeiras linhas da matriz;
b) validar corretivamente durante a entrada para não ter números menor ou igual a zero e não ter números repetidos
na matriz;
** usar um intervalo no rand() pequeno para que seja gerado números repetidos.
c) mostrar a mostrar em sua forma de entrada;
d) ordenar a matriz de forma crescente;
e) mostrar a matriz ordenada.
Após os processos anteriores;
f) Criar um menu:
MENU PRINCIPAL
1) Inserir numero na matriz
2) Excluir numero na matriz
3) Finalizar algoritmo
 Digite uma das opções ...: _
g) Para ambas opções receber um numero (validar corretivamente para ser maior que zero);
h) Para ambas opções pesquisar se esse número existe na matriz,
a. Para opção1)
 Se o número NÃO EXISTE na matriz, verificar se tem espaço na matriz para inserção;
 Se houver espaço, localizar a posição onde será inserido e movimentar todos os demais
elementos para posições seguintes, para liberar o espaço de inserção;
 Dar mensagem de número inserido com sucesso e mostrar a matriz atualizada para conferência.
 CASO número exista, dar uma mensagem que número já existe.
b. Para opção 2)
 Se o número existe na matriz, localizar a posição e trazer todos os elementos seguintes para
posições anteriores, e inserir 0 (zero) na última para liberá-la;
 Dar mensagem de número excluído com sucesso e mostrar a matriz atualizada para conferência.
 CASO o número NÃO EXISTE, dar uma mensagem que o número não existe.

===
*/
//===

void ordenar_mat(int mat[][tam2], int l, int k)
{
    int i,j,c,aux;
    i=j=aux=0;
    c=1;

    while(c<tam1*tam2)
    {
        i=0;
        while(i<l)
        {
            j=0;
            while(j<k-1)
            {
                if(mat[i][j]>mat[i][j+1])
                {
                    aux=mat[i][j];
                    mat[i][j]=mat[i][j+1];
                    mat[i][j+1]=aux;
                }
                j++;
            }
            if (i<tam1-1) //verificar se tem linha sobrando.
            {
                if (mat[i][j] > mat[i+1][0])
                {
                    aux = mat[i][j];
                    mat[i][j] = mat[i+1][0];
                    mat[i+1][0] = aux;
                }
            }
            i++;
        }
        c++;
    }
}

void validar_mat(int mat[][tam2], int *i, int *j)
{
    int k, l, limite_coluna;
    k = l = 0;

    if (mat[*i][*j] <= 0)  // Verifica se o número é inválido
    {
        printf("\n Numero invalido (zero ou negativo), gerar outro: ");
        (*j)--;  // Decrementa j para refazer a entrada
    }
    else
    {
        l = 0;
        // Determina o limite de colunas antes do loop
        while (l <= *i)  // Percorre as linhas anteriores à linha atual
        {
            if (*i == l) // Verifica se estamos na linha atual
            {
                limite_coluna = *j; // Limita até a coluna *j para a linha atual
            }
            else
            {
                limite_coluna = tam2; // Limita até a última coluna para as linhas anteriores
            }

            k = 0;
            while (k < limite_coluna)  // Percorre as colunas até o limite determinado
            {
                if (mat[*i][*j] == mat[l][k])  // Verifica se o número é repetido
                {
                    printf("\n Numero %d repetido em [%d][%d], gerar outro: ", mat[*i][*j], l, k);
                    (*j)--;  // Decrementa j para refazer a entrada
                    return;  // Interrompe a execução da função para que o número seja gerado novamente
                }
                k++;
            }
            l++;
        }
    }
}

//===

void mostrar_mat (int mat[][tam2], int l, int k)
{
    int i,j;
    i=j=0;

    printf("\n\n Matriz: \n");
    i=0;
    while(i<l)
    {
        j=0;
        while(j<k)
        {
            printf("%6d", mat[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

//===

void preencher_mtd (int mat[][tam2], int *i, int *j)
{
    int k,l;
    k=l=0;

    (*i)=0;
    while(*i<tam1/2)
    {
        (*j)=0;
        while(*j<tam2)
        {
            mat[*i][*j]=rand()%(tam1*tam2);
            printf("\n Matriz[%d][%d] = %d", *i, *j, mat[*i][*j]);
            validar_mat(mat, &*i, &*j);
            (*j)++;
        }
        (*i)++;
    }
}

//===

int main()
{
    //CRIACAO DE VARIAVEIS
    int mat[tam1][tam2];
    int i, j, l, k, lin, col;

    //INICIALIZAÇÃO
    i=j=l=k=lin=col=0;
    //ZERAR MATRIZES
    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            mat[i][j]=0;
            j++;
        }
        i++;
    }
    //PREENCHER METADE
    preencher_mtd(mat, &i, &j);
    printf("\ni = %d e j = %d", i, j);
    mostrar_mat(mat, i, j);
    ordenar_mat(mat, i, j);
    mostrar_mat(mat, i, j);
}
