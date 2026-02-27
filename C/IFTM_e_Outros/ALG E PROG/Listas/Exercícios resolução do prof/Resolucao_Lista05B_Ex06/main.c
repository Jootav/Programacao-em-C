/*
  L05B_ex06 – Elaborar um algoritmo que receba uma série de números inteiros (positivos e ou negativos) cujo elemento finalizador é o 0 (zero servirá apenas “parar” a entrada dos números e não participará do processo), Apresente no final as seguintes informações:
a)	quantos números foram fornecidos;
b)	qual é a soma dos números fornecidos;
c)	qual é a média aritmética entre os números;
d)	qual foi o menor número fornecido;
e)	qual foi o maior número fornecido


    Prof. Ernani Cláudio Borges
    data:
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
//============    DECLARAR PROTOTIPOS ==========================
//==============================================================





//==============================================================
//============    CRIAR OS MÓDULOS DE FUNÇÕES ==================
//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================



//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    int qtd_total, maior_n, menor_n, n;
    float media, soma;

    //inicializar vars
    qtd_total = maior_n = menor_n = n = media = soma = 0;

    //receber primeiro elemento
    printf ("\n digite PRIMEIRO numero ou 0 (zero) para finalizar ..: ");
    fflush (stdin);
    scanf ("%d", &n);

    //laço principal
    while (n != 0)
    {
        //acumular quantidade total
        qtd_total++;

        //acumular a soma
        soma = soma + n;

        //verificar se eh o primeiro elemento
        if (qtd_total == 1)
        {
            maior_n = n;
            menor_n = n;
        }

        //comparar se eh maior
        if (n > maior_n)
            maior_n = n;

        //comparar se eh menor
        if (n < menor_n)
            menor_n = n;

        //proximo numero
        printf ("\n digite PROXIMO numero ou 0 (zero) para finalizar ..: ");
        fflush (stdin);
        scanf ("%d", &n);

    }//fim laço principal

    //relatorio
    printf ("\n\n\n RELATORIO FINAL \n");
    if (qtd_total == 0)
        printf ("\n nao houve entrada de dados.");
    else
    {
        printf ("\n total de numeros inforamdos .....: %d", qtd_total);
        printf ("\n soma dos numeros ................: %.0f", soma);
        media = soma / qtd_total;
        printf ("\n media dos numeros ...............: %.1f", media);
        printf ("\n Maior numero da lista ...........: %d", maior_n);
        printf ("\n Menor numero da lista ...........: %d", menor_n);
    }

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
