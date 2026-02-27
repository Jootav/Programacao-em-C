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
        printf ("\n 1) Estatística com intervalo de números");
        printf ("\n 2) ");
        printf ("\n 3) ");
        printf ("\n 4) Finalizar programa");
        printf ("\n\n Insira uma das opcões.......: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 4)
        {
            printf ("\nOpcão inválida ... Digite 1, 2, 3 para opções e 4 para finalizar...: ");
            fflush (stdin);
            scanf ("%d", &opc);

        }//fim laço validar opcao

        //IF ELSE OPÇÕES

        if (opc == 1)// OPÇÃO 1
        {

            printf("\nDigite o primeiro número inteiro e positivo (0 a 100) ou \"-1\" para finalizar: ");
            scanf("%d", &n);
            fflush(stdin);

            while (n != -1)
            {
                while (n < -1 || n > 100)
                {
                    printf("\nInsira um número válido. Inteiro, positivo e de 0 a 100: ");
                    scanf("%d", &n);
                    fflush(stdin);
                }

                qtd_total++;

                if (n >= 0 && n <= 25) // 0 E 25
                {
                    int1++;
                }
                else
                {
                    if (n >= 26 && n <= 50) // 26 E 50
                    {
                        int2++;
                    }
                    else
                    {
                        if (n >= 51 && n <= 75) // 51 e 75
                        {
                            int3++;
                            soma_n = soma_n + n;
                        }
                        else
                        {
                            int4++; // 76 e 100
                        }
                    }
                }

                printf("\nDigite outro número inteiro e positivo: ");
                scanf("%d", &n);
                fflush(stdin);
            }

            if (qtd_total == 0)
            {
                printf("\nNão foi inserido nenhum número. . .");
            }
            else
            {
                percentual = (int2 / 25.0) * 100;
                media = soma_n / int3;

                printf("\n          RELATÓRIO");
                printf("\n=====================================");
                printf("\nNúmeros no intervalo 1: %d", int1);
                printf("\nNúmeros no intervalo 2: %d", int2);
                printf("\nNúmeros no intervalo 3: %d", int3);
                printf("\nNúmeros no intervalo 4: %d", int4);
                printf("\nPercentual de números no intervalo 2: %.2f", percentual);
                printf("\nMedia dos números no intervalo 3: %.2f", media);
                printf("\n=====================================");
            }

        }
        else // SE NÃO FOR 1
        {
            if (opc == 2) // OPÇÃO 2
            {
                printf("\nDigite o primeiro número positivo ou \"0\" para finalizar: ");
                scanf("%d", &n);
                fflush(stdin);

                while (n != 0)
                {
                    while (n < 0)
                    {
                        printf("\n\nNúmero inválido... Digite outro número (maior que zero) ou \"0\" para finalizar: ");
                        scanf("%d", n);
                        fflush(stdin);
                    }

                    if (n % 2 == 0)
                    {
                        qtd_pares++;
                    }
                    else
                    {
                        qtd_imp++;
                    }

                    soma_n = soma_n + n;
                    qtd_total++;

                    printf("\nDigite o outro número positivo ou \"0\" para finalizar: ");
                    scanf("%d", &n);
                    fflush(stdin);

                }


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
