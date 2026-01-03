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

int procurar_mat (int mat[][tam2], int i, int j, int nr, int c)
{
    int l,k,ok;
    l=k=ok=0;
    l=0;
    while(l<tam1)
    {
        k=0;
        while(k<tam2)
        {
            if(mat[l][k] == nr)
            {
                ok++;
            }
            k++;
        }
        l++;
    }
    return(ok);
}

//===

void receber_num (int *nr)
{
    printf("\n Digite um numero positivo para inserir na matriz: ");
    fflush(stdin);
    scanf("%d", &*nr);
    while(*nr <= 0)
    {
        printf("\n Digite um numero valido : ");
        scanf("%d", &*nr);
    }
}

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
            if (i<l-1)
            {
                if (mat[i][j]>mat[i+1][0])
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


void validar_mat(int mat[][tam2], int *i, int *j, int *c)
{
    int k,l,cont;
    k=l=0;

    if(mat[*i][*j]<=0)
    {
        printf("\n Zero invalido, gerar outro: ");
        (*c)--;
        (*j)--;
    }
    else
    {
        cont=1;
        l=0;
        while(l<tam1 && cont < *c)
        {
            k=0;
            while(k<tam2 && cont < *c)
            {
                if(mat[*i][*j] == mat[l][k])
                {
                    printf("\n Numero %d repetido em [%d][%d], gerar outro: ", mat[*i][*j], l, k);
                    (*c)--;
                    cont = c;
                    (*j)--;
                }
                k++;
                cont++;
            }
            l++;
        }
    }
}

//===

void mostrar_mat (int mat[][tam2], int c)
{
    int i,j,cont;
    i=j=0;
    cont=0;

    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            printf("%6d", mat[i][j]);
            cont++;
            Sleep(50);
            j++;
        }
        printf("\n");
        i++;
    }
}

//===

void preencher_mtd (int mat[][tam2], int *i, int *j, int *c)
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
            (*c)++;
            validar_mat(mat, &*i, &*j, &*c);
            Sleep(50);
            (*j)++;
        }
        (*i)++;
    }
}

//===

int main()
{
    srand(time(NULL));

    //CRIACAO DE VARIAVEIS
    int mat[tam1][tam2];
    int i, j, ii, jj, l, k, ok, flag;
    int nr, c, cont, cont_mov, opc;

    //INICIALIZAÇÃO
    i=j=l=k=ii=jj=cont_mov=flag=0;
    nr=opc=c=cont=0;
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
    preencher_mtd(mat, &i, &j, &c);
    printf("\n\n Matriz em forma de entrada: \n");
    mostrar_mat(mat, c);
    ordenar_mat(mat, i, j);
    printf("\n\n Matriz em forma ordenada: \n");
    mostrar_mat(mat, c);
    printf("\n\n Pressione qualquer tecla para continuar. \n\n");
    getch();
    while(opc!=3)
    {
        ii=jj=flag=l=k=nr=cont=0;

        system("cls");
        printf("\n ===========MATRIZ=========== \n\n");
        mostrar_mat(mat, c);
        printf("\n\n =======MENU PRINCIPAL=======");
        printf("\n 1 - Insira numero na matriz.");
        printf("\n 2 - Excluir numero na matriz.");
        printf("\n 3 - Finalizar algoritmo.");
        printf("\n Digite uma das opcoes: ");
        fflush(stdin);
        scanf("%d", &opc);
        while(opc<1 || opc>3)
        {
            printf("\nInsira uma opção válida (1, 2 ou 3): ");
            fflush(stdin);
            scanf("%d", &opc);
        }
        if(opc==3)
        {
            printf("\nFinalizando...\n");
        }
        else
        {
            if(opc==1)
            {
                receber_num(&nr); // RECEBER O NUMERO
                ok = procurar_mat(mat, i, j, nr, c);
                if(ok==1)
                {
                    printf("\n Numero %d ja existe na matriz...\n", nr);
                    getch();
                }
                else
                {
                    printf("\n Numero %d nao existe na matriz... Inserindo... \n", nr);
                    Sleep(1000);
                    if(c == tam1*tam2)
                    {
                        printf("\n Matriz cheia. Sem espaco para inserir...\n");
                        getch();
                    }
                    else
                    {
                        flag=0;
                        l=0;
                        while(l<tam1 && flag == 0)
                        {
                            k=0;
                            while(k<tam2 && flag == 0)
                            {
                                if(nr<mat[l][k])
                                {
                                    flag++;
                                    ii=l;
                                    jj=k;
                                }
                                k++;
                            }
                            l++;
                        }
                        if(flag == 0)
                        {
                            l=0;
                            while(l<tam1 && cont < c)
                            {
                                k=0;
                                while(k<tam2 && cont < c)
                                {
                                    if(mat[l][k] == 0)
                                    {
                                        mat[l][k] = nr;
                                        cont = c;
                                    }
                                    k++;
                                }
                                l++;
                            }
                            c++;
                        }
                        else
                        {
                            l=tam1-1;
                            while(l >= ii)
                            {
                                k=tam2-1;
                                while(k >= 0)
                                {
                                    if (l == ii && k == jj)
                                    {
                                        mat[l][k] = nr;
                                        c++;
                                    }
                                    else
                                    {
                                        if (l == ii && k > jj)
                                        {
                                            mat[l][k] = mat[l][k - 1];
                                        }
                                        if (l > ii && k == 0)
                                        {
                                            mat[l][k] = mat[l - 1][tam2 - 1];
                                        }
                                        if (l > ii)
                                        {
                                            mat[l][k] = mat[l][k - 1];
                                        }
                                    }
                                    k--;
                                }
                                l--;
                            }
                        }
                    }
                }
            }
            else // EXCLUIR
            {
                receber_num(&nr);
                ok = procurar_mat(mat, i, j, nr, c);
                if(ok!=1)
                {
                    printf("\n Numero %d nao existe na matriz...\n", nr);
                    getch();
                }
                else
                {
                    printf("\n Numero %d existe na matriz... Removendo... \n", nr);
                    Sleep(1000);
                    if(c == 0)
                    {
                        printf("\n Matriz vazia.\n");
                        getch();
                    }
                    else
                    {
                        flag=0;
                        l=0;
                        while(l<tam1 && flag == 0)
                        {
                            k=0;
                            while(k<tam2 && flag == 0)
                            {
                                if(nr==mat[l][k])
                                {
                                    flag++;
                                    ii=l;
                                    jj=k;
                                }
                                k++;
                            }
                            l++;
                        }
                        if(flag == 1)
                        {
                            l=0;
                            while(l<tam1 && cont < c)
                            {
                                k=0;
                                while(k<tam2 && cont < c)
                                {
                                    if(mat[l][k] == nr)
                                    {
                                        mat[l][k] = 0;
                                        cont = c;
                                        c--;
                                    }
                                    k++;
                                }
                                l++;
                            }
                            c++;
                            l=0;
                            while(l<tam1)
                            {
                                k=0;
                                while(k<tam2)
                                {
                                    if(mat[l][k] == 0)
                                    {
                                        if(l<tam1-1 && k<tam2-1)
                                        {
                                            mat[l][k]=mat[l][k+1];
                                            mat[l][k+1]=0;
                                        }
                                        if(l<tam1-1 && k==tam2-1)
                                        {
                                            mat[l][k]=mat[l+1][0];
                                            mat[l+1][0]=0;
                                        }
                                        if(l==tam1-1 && k==tam2-2)
                                        {
                                            mat[l][k]=0;
                                        }
                                    }
                                    k++;
                                }
                                l++;
                            }
                        }
                    }
                }
            }
        }
    }
}
