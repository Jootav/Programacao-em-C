/*
    L05C_ex03  – Elabore  um  algoritmo que  processe e  apresente o  valor  do  somatório S  da  série  abaixo correspondentes aos “n” termos desta sequência, ou seja, receber via teclado a quantidade de termos que o cliente (usuário) deseja calcular (validar corretivamente a entrada de dados para se maior que zero).

S =   1000    -    997   +   994    -    991   +   988    -    985   +     ...
        5          10         15          20        25         30


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
    int cont, n, sinal;
    float s, num, den;

    //inicializar vars
    cont = sinal = 1;
    n = s = 0;
    num = 1000;
    den = 5;

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

    //calculo da sequencia somatoria
    printf ("\n\n Calculando o somatorio da sequencia \n\n");
    while (cont <= n)
    {
        s = s + ( (num / den) * sinal);
        //passar proximo termo
        num = num - 3;
        den = den + 5;
        sinal = sinal * -1;
        cont++;
    }//fim laço calculo

    printf ("\n\n somatorio = %.3f", s);


    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
