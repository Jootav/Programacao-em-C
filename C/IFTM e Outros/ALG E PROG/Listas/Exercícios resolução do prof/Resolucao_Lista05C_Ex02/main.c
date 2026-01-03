/*
    L05C _ex02 – Elabore um algoritmo que solicite ao usuário um número inteiro e positivo, validar corretivamente a entrada para que esse número seja positivo, processe e apresente o resultado de seu fatorial. Sabendo que matematicamente, o fatorial de um número é representado pelo símbolo de exclamação, veja: 5!
O 5! (cinco fatorial) equivale a multiplicação de todos os termos, começando de 1 até ele mesmo:
1 * 2 * 3 * 4 * 5  = 120
Por definição matemática, o fatorial de 0 (zero) é igual a 1 (um).

Obs.1: Validação corretiva é um processo que usamos para receber a informação e durante esta entrada já verificar é verdadeira, ou seja, enquanto for falsa estará dentro laço de repetição até que o usuário digite o valor correto. Veja o exemplo deste algoritmo.


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
    float cont, res, n;
    int aux;

    //inicializar vars
    cont = res = 1;
    n = 0;

    printf ("\n digite numero positivo e inteiro ...: ");
    fflush (stdin);
    scanf ("%f", &n);
    //validar
    aux = n;
    while (n < 0 || n != aux)
    {
        printf ("\n valor invalido ... digite outro positivo e inteiro ..: ");
        fflush (stdin);
        scanf ("%f", &n);
        aux = n;
    }//fim validação

    printf ("\n\n Calculo fatorial de %.0f \n\n", n);

    while (cont <= n)
    {
        res = res * cont;
        cont++;
    }
    printf ("\n\n Fatorial de %.0f! = %.0f", n, res);

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
