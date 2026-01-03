/*
    Exemplo de como criar MENU com duas opcoes de calculo,
    sendo:
    * opcao 1: calcular o fatorial de um numero
    * opcao 2: calcular o Exponencial de um numero, vamos
               receber dois numeros, o primeiro será base,
               o segundo será o expoente.


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
    int opc, tecla;

    //var da opcao 1
    int n, cont, res;

    //var da opcao 2
    int base, expo;

    //inicializar vars
    opc = tecla = 0;

    //laço principal do MENU
    while (opc != 3)
    {
        //inicializar vars da opcao 1
        n = 0;
        cont = res = 1;

        //inicializar vars da opcao 2
        base = expo = 0;

        system ("cls");

        printf ("\n      MENU \n");
        printf ("\n 1) Calculo fatorial de um numero");
        printf ("\n 2) Calculo Exponencial ");
        printf ("\n 3) finalizar programa");
        printf ("\n\n digite uma das opcoes ..: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 3)
        {
            printf ("\n opcao invalida ... digite 1, 2 ou 3 para fim ...: ");
            fflush (stdin);
            scanf ("%d", &opc);
        }//fim laço validar opcao

        //verificar qual opcao
        if (opc == 3)
            printf ("\n\n Finalizando ... ");
        else
        {
            if (opc == 1)
            {
                printf ("\n\n opcao 1 - Calculo Fatorial de um numero.");
                printf ("\n\n Digite numero positivo ..: ");
                fflush (stdin);
                scanf ("%d", &n);
                //validar
                while (n < 0)
                {
                    printf ("\n numero invalido ... digite outro nr positivo ...: ");
                    fflush (stdin);
                    scanf ("%d", &n);
                }
                //calculo do fatorial
                printf ("\n\n Fatorial de %d! = ", n);

                while (cont <= n)
                {
                    res = res * cont;
                    cont++;
                }
                printf (" %d ", res);

            }
            else
            {
                printf ("\n\n opcao 2 - Caluclo Exponencial ");

                printf ("\n\n digite valor da base (positivo) ...: ");
                fflush (stdin);
                scanf ("%d", &base);
                //validar
                while (base <= 0)
                {
                    printf ("\n valor da base invalido ... digite outro ..: ");
                    fflush (stdin);
                    scanf ("%d", &base);
                }

                printf ("\n\n digite valor do expoente (positivo) ...: ");
                fflush (stdin);
                scanf ("%d", &expo);
                //validar
                while (expo < 0)
                {
                    printf ("\n valor do expoente invalido ... digite outro ..: ");
                    fflush (stdin);
                    scanf ("%d", &expo);
                }
                //calculo do expoente
                while (cont <= expo)
                {
                    res = res * base;
                    cont++;
                }
                printf ("\n\n %d ^ %d = %d", base, expo, res);

            }//fim opcao 2 e 1
            printf ("\n\n pressione \"ESC\" para voltar ao menu ...");
            tecla = getch();
            while (tecla != 27)
            {
                printf ("\n tecla invalida ... pressione ESC");
                tecla = getch();
            }
        }//fim da opcao 3

    }//fim laço do menu

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
