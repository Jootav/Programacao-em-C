/*
L05B_ex01 – A série de Fibonacci é formada pela seguinte seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc.
Elabore um algoritmo que receba via teclado A QUANTIDADE DE TERMOS que o cliente (usuário)
deseja visualizar na tela. Por exemplo, caso seja informado 20, mostrar os 20 primeiros números da
série.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4182, 6765.
Obs.: fazer de forma que o usuário possa “voltar” e executar com outro quantitativo,
respondendo << s >> sim, e ou << n >> para não
Fazer todas as VALIDAÇÕES de entradas (quantidade de termos e resposta ‘s’ ou ‘n’ e/ou ‘S’ ou ‘N’)

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
    char resp;
    int prim, seg, prox, cont, qtd_termos, col;

    //inicializar vars
    resp = 's';

    //laço principal para voltar e executar novamente
    while (resp == 's' || resp == 'S')
    {
        //inicializar vars para varios calculos
        prim = seg = qtd_termos = 0;
        prox = cont = col = 1;

        //receber limite
        system ("cls"); // limpar tela
        printf ("\n Digite quantidade de termos positivo ...: ");
        fflush (stdin);
        scanf ("%d", &qtd_termos);
        //validar
        while (qtd_termos < 1)
        {
            printf ("\n quantidade invalida ... digite outro nr positivo ...: ");
            fflush (stdin);
            scanf ("%d", &qtd_termos);
        }

        //mostrar sequencia
        printf ("\n\n Sequencia: \n\n");

        while (cont <= qtd_termos)
        {
            if (col <= 6)
            {
                printf ("%10d", prox);
                //passar para proximo termo da sequencia
                prim = seg;
                seg = prox;
                prox = prim + seg;
                col++;
                cont++;
            }
            else
            {
                col = 1;
                printf ("\n");
            }
        }//fim laço da sequencia.

        printf ("\n\n\n Deseja executar novamente com outra quantidade, digite: ");
        printf ("\n << s >> para sim \n << n >> para nao \n Informe opcao ..: ");
        fflush (stdin);
        scanf ("%c", &resp);
        //validar
        while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N')
        {
            printf ("\n resposta invalida ... digite (s) ou (n) ..: ");
            fflush (stdin);
            scanf ("%c", &resp);
        }//fim validar resposta

    }//fim laço principal

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
