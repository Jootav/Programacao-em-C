/*===============================================================
Lista03B_ex02 - Efetuar a leitura de 3 valores numéricos
positivos e mostrá-los em ordem decrescente (do maior para
o menor). A cada entrada verificar se o número é menor que zero,
caso verdadeiro mostrar mensagens de número invalido e finalizar
o algoritmo, ou seja, só receber o próximo número se o atual for
maior que zero.

    NOME ALUNO(A):
    CURSO:
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:

*/
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define tam1 5
#define tam2 5

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS
    int nr1, nr2, nr3;

    //INICIALIZAR VARIAVEIS
    nr1 = nr2 = nr3 = 0;

    //receber dados
    printf ("\n Digite primeiro numero (maior que zero) ...: ");
    fflush (stdin);
    scanf ("%d", &nr1);
    //verificar
    if (nr1 <= 0)
        printf ("\n\n primeiro numero invalido ...");
    else
    {
        printf ("\n digite  segundo numero (maior que zero) ...: ");
        fflush (stdin);
        scanf ("%d", &nr2);
        //verificar
        if (nr2 <= 0)
            printf ("\n\n segundo numero invalido ... ");
        else
        {
            printf ("\n digite terceiro numero (maior que zero) ...: ");
            fflush (stdin);
            scanf ("%d", &nr3);
            //verificar
            if (nr3 <= 0)
                printf ("\n\n terceiro numero invalido ... ");
            else
            {
                //todos numeros sao maiores que zero
                //vamos ordenar
                printf ("\n\n\n    NUMEROS ORDENADOS DECRESCENTE \n\n");
                if (nr1 >= nr2 && nr1 >= nr3)
                    if (nr2 >= nr3)
                        printf ("\n %d, %d, %d", nr1, nr2, nr3);
                    else
                        printf ("\n %d, %d, %d", nr1, nr3, nr2);
                else
                    if (nr2 >= nr1 && nr2 >= nr3)
                        if (nr1 >= nr3)
                            printf ("\n %d, %d, %d", nr2, nr1, nr3);
                        else
                            printf ("\n %d, %d, %d", nr2, nr3, nr1);
                    else
                        if (nr3 >= nr1 && nr3 >= nr2)
                            if (nr1 >= nr2)
                                printf ("\n %d, %d, %d", nr3, nr1, nr2);
                            else
                                printf ("\n %d, %d, %d", nr3, nr2, nr1);

            }//fimse nr3
        }//fimse nr2
    }//fimse nr1

    //FINALIZAR PROGRAMA
    printf ("\n\n\n\n Tchau ... obrigado ... \n\n\n");

    return 0;
}
