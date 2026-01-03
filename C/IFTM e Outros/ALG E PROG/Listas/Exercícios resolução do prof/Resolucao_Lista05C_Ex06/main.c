/*
    L05C _ex06 – Receber dois números inteiros e positivos via teclado (validar corretivamente durante a entrada). Processar e mostrar a exponenciação do primeiro número elevado começando em zero, variando de 1 em 1 até chegar no segundo número. Deve ser considerado que qualquer número elevado a zero é 1. Mostrar na tela conforme exemplo abaixo, caso o primeiro número seja 3 e o segundo seja 15,

30 = 1
31 = 3

32 = 9
33 = 27
......
315 = 14348907

Obs.: proibido usar funções prontas tais como: exp, ^, POW,
... ou qualquer outra.
  Você deverá criar uma lógica (laço) para efetuar os cálculos.


Ao final, Perguntar ao usuário se deseja executar novamente com outros números. Validar corretivamente a resposta para ser << s >> para sim e << n >> para não.


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
    int cont, expo, aux;
    float res, base, expo_final;
    char resp;

    //inicializar vars
    resp = 's';

    //laço principal
    while (resp == 's' || resp == 'S')
    {
        //inicializar vars
        cont = res = 1;
        expo = expo_final = base = aux = 0;

        system ("cls");
        //receber dados
        printf ("\n digite valor da base positivo e inteira...: ");
        fflush (stdin);
        scanf ("%f", &base);
        //validar
        aux = base;
        while (base <= 0 || base != aux)
        {
            printf ("\n base invalida ... digite outra positivo e inteira ..: ");
            fflush (stdin);
            scanf ("%f", &base);
            aux = base;
        }//fim laço validar base

        printf ("\n digite valor do expoente final positivo e inteiro ...: ");
        fflush (stdin);
        scanf ("%f", &expo_final);
        //validar
        aux = expo_final;
        while (expo_final <= 0 || expo_final != aux)
        {
            printf ("\n expoente final invalido ... digite outro positivo e inteiro ..: ");
            fflush (stdin);
            scanf ("%f", &expo_final);
            aux = expo_final;
        }//fim laço validar base

        //calculos
        printf ("\n\n Calculos das exponenciacoes de %.0f elevado de 0 ate %.0f\n\\", base, expo_final);

        while (expo <= expo_final)
        {
            while (cont <= expo)
            {
                res = res * base;
                cont++;
            }//fim laço calculo expoente
            printf ("\n   %.0f ^ %d = %.0f", base, expo, res);
            //re-iniciar vars
            //cont = res = 1;
            expo++;
        }

        //perguntar se deseja voltar e executar novamente
        printf ("\n\n deseja executar novamente: ");
        printf ("\n << s >> para sim \n << n >> para nao \n digite opcao ..: ");
        fflush (stdin);
        scanf ("%c", &resp);
        //validar
        while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N')
        {
            printf ("\n resposta invalida ... digite << s >> ou << n >> ..: ");
            fflush (stdin);
            scanf ("%c", &resp);
        }//fim laço validar respota

    }//fim laço principal

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
