/*
   L05C_ex01 – Elabore um algoritmo que processe e apresente o valor de S correspondente a série abaixo:

S =    1    +    3    +    5    +    7    +    9    +    11    +	...	+      ...
       1         2         3         4         5          6		     n

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
    float s, num, den;
    int n;

    //inicializar vars
    s = n = 0;
    num = den = 1;

    printf ("\n\n Informe quantos da termos da sequencia  ..: ");
    fflush (stdin);
    scanf ("%d", &n);
    //validar
    while (n <= 0)
    {
        printf ("\n quantidade invalida ... digite outro ...: ");
        fflush (stdin);
        scanf ("%d", &n);
    }//fim laço validar

    //laço principal para gerar o somatorio
    printf ("\n\n calculando o somatorio ...: ");

    while (den <= n)
    {
        s = s + (num / den);
        //proximo termo
        num = num + 2;
        den++;
    }//fim laço da sequencia.

    printf (" %.2f", s);

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
