/*
L05B_ex03 – Uma empresa possui uma listagem com vários números de um senso do município de sua cidade (não
se sabe a quantidade exata de entrevistados). Desta forma, vamos elaborar um algoritmo que receba um
número de cada vez, processar os itens solicitados até chegar no último que será o número ZERO, o
qual irá ENCERRAR a entrada dos dados e não fará parte da contagem. Ao final da entrada e processo,
mostrar os seguintes resultados:
a) quantos positivos
b) quantos negativos;
c) quantos pares;
d) quantos ímpares;
e) qual é o maior número; e,
f) qual o menor número.
Obs.1: para facilitar a verificação e armazenamento do MAIOR e MENOR número, considere que o
primeiro número informado será o maior e menor para que possa ser comparado com os próximos que
serão digitados.

    Prof. Ernani Cláudio Borges
    data: 10/09/2024
==============================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>

//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    int qtd_total, qtd_pares, qtd_impares, qtd_pos, qtd_neg;
    int maior_n, menor_n, n;

    //inicializar vars
    qtd_total = qtd_pares = qtd_impares = qtd_pos = qtd_neg = 0;
    maior_n = menor_n = n = 0;

    printf ("\n\n digite o PRIMEIRO numero ou 0 (zero) para finalizar entrada ..: ");
    fflush (stdin);
    scanf ("%d", &n);

    //laço para processar todos os dados solicitados
    while (n != 0)
    {
        //acumular a quantidade total de numeros
        qtd_total++;

        //acumular qtd pares ou impares
        if (n % 2 == 0)
        {
            qtd_pares++;
        }
        else
        {
            qtd_impares++;
        }

        //acumular qtd de positivos ou negativos
        if (n > 0)
        {
            qtd_pos++;
        }
        else
        {
            qtd_neg++;
        }

        //pegar o PRIMEIRO elemento e colocar nas vars maior_n e menor_n
        if(qtd_total == 1)
        {
            maior_n = n;
            menor_n = n;
        }

        //comparar se eh o maior
        if (n > maior_n)
        {
            maior_n = n;
        }

        //comparar se eh o menor
        if (n < menor_n)
        {
            menor_n = n;
        }

        //recebe proximo numero
        printf ("\n\n digite o PROXIMO numero ou 0 (zero) para finalizar entrada ..: ");
        fflush (stdin);
        scanf ("%d", &n);

    }//fim do laço principal

    //relatorio final
    printf ("\n\n relatorio final \n\n");
    if (qtd_total == 0)
    {
        printf ("\n Nao houve entrada de dados");
    }
    else
    {
        printf ("\n total de numeros informados .......: %8d", qtd_total);
        printf ("\n quantidade de numeros pares .......: %8d", qtd_pares);
        printf ("\n quantidade de numeros impares .....: %8d", qtd_impares);
        printf ("\n quantidade de numeros positivos ...: %8d", qtd_pos);
        printf ("\n quantidade de numeros negativos ...: %8d", qtd_neg);
        printf ("\n Maior numero da lista .............: %8d", maior_n);
        printf ("\n Menor numero da lista .............: %8d", menor_n);
    }

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
