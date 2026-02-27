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
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#include <locale.h>

#define tam1 5
#define tam1 5

//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //ACENTOS
    setlocale(LC_ALL,"");

    //criar vars
    int opc;

    //var da opcao 1
    int n, int1, int2, int3, int4, qtd_total;
    float percentual, media, soma_n;

    //var da opcao 2

    int maior_p, menor_imp, maior_n, menor_n;
    int qtd_pares, qtd_imp;
    float pc_pares, pc_impares, res;

    //var da opcao 3

    //inicializar vars


    //laço principal do MENU
    while (opc != 4)
    {
        //inicializar vars da opcao 1

        n = int1 = int2 = int3 = int4 = 0;
        percentual = soma_n = media = 0;

        //inicializar vars da opcao 2

        pc_pares = pc_impares = 0;
        maior_p = menor_imp = maior_n = menor_n = 0;
        res = 0;

        //inicializar vars da opcao 3

        system ("cls");

        printf ("\n=================MENU==================== \n");
        printf ("\n 1) ");
        printf ("\n 2) Seqüência de números por linhas");
        printf ("\n 3) ");
        printf ("\n 4) Finalizar programa");
        printf ("\n\n Insira uma das opcões.......: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 3)
        {
            printf ("\nOpcão inválida ... Digite 1 e 2 para opções e 3 para finalizar...: ");
            fflush (stdin);
            scanf ("%d", &opc);

        }//fim laço validar opcao

        //IF ELSE OPÇÕES

        if (opc == 1)// OPÇÃO 1
        {

            printf("\nDigite o primeiro número inteiro e positivo (0 a 100) ou \"-1\" para finalizar: ");
            scanf("%d", &n);
            fflush(stdin);

        }
        else // SE NÃO FOR 1
        {
            if (opc == 2) // OPÇÃO 2
            {

            }
            else // SE NAO FOR 2
            {
                if (opc == 3) // OPÇÃO 3
                {

                }
                else // OPÇÃO 4 - FINALIZAÇÃO
                {
                    printf("\n\nFinalizando. . .");
                }
            }
        }
        printf ("\n\n Pressione qualquer tecla para voltar ao menu. . .");
        getch();
    }

    printf("\n\nAcabou!\n");
    return 0;
}
