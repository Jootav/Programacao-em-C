/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:


    Efetuar a leitura de 3 valores numéricos positivos e mostrá-los em ordem decrescente (do maior
    para o menor). A cada entrada verificar se o número é menor que zero, caso verdadeiro mostrar mensagens
    de número invalido e finalizar o algoritmo, ou seja,
    só receber o próximo número se o atual for maior que zero.


*/
//===============================================================
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

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================



//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //ACENTUAÇÕES (olhei na internet)
    setlocale(LC_ALL,"");

    //CRIAR VARIAVEIS
    int nr1, nr2, nr3;

    //INICIALIZAR VARIAVEIS

    printf("\n Insira o primeiro número (maior que zero)..: ");

    fflush(stdin);
    scanf("%d", &nr1);

    //VALIDAÇÃO DOS NÚMEROS
    if (nr1 <= 0)
    {
        printf("\n\n Número inválido. Deve ser maior que zero. ");
    }
    else
    {
        printf("\n Insira o segundo número (maior que zero)...: ");
        scanf("%d", &nr2);

        if (nr2 <= 0)
        {
            printf("\n\n Número inválido. Deve ser maior que zero. ");
        }
        else
        {
            printf("\n Insira o terceiro número (maior que zero)..: ");
            scanf("%d", &nr3);

            if (nr3 <= 0)
            {
                printf("\n\n Número inválido. Deve ser maior que zero. ");
            }
            else
            {
                //ORGANIZAÇÃO, DO MAIOR PARA O MENOR

                if (nr1 > nr2 && nr1 > nr3)
                {
                    //SE NR1 FOR MAIOR QUE NR2 E NR3 ENTÃO
                    if (nr2 > nr3)
                    {
                        //SE NR2 FOR MAIOR QUE NR3 ENTÃO
                        printf("\n\n A ordem é....: %d %d %d", nr1, nr2, nr3);
                    }
                    else
                    {
                        printf("\n\n A ordem é....: %d %d %d", nr1, nr3, nr2);
                    }
                }
                else
                {
                    //SE NR1 NÃO FOR MAIOR QUE NR2 E NR3 ENTÃO
                    if (nr2 > nr3)
                    {
                        //SE NR2 FOR MAIOR QUE NR3 ENTÃO
                        if (nr3 > nr1)
                        {
                            //SE NR3 FOR MAIOR QUE NR1 ENTÃO
                            printf("\n\n A ordem é....: %d %d %d", nr2, nr3, nr1);
                        }
                        else
                        {
                            //SE NR3 NÃO FOR MAIOR QUE NR1 ENTÃO
                            printf("\n\n A ordem é....: %d %d %d", nr2, nr1, nr3);
                        }

                    }
                    else
                    {
                        //SE NR2 NÃO FOR MAIOR QUE NR3 ENTÃO
                        if (nr2 > nr1)
                        {
                            //SE NR2 FOR MAIOR QUE NR1 ENTÃO
                            printf("\n\n A ordem é....: %d %d %d", nr3, nr2, nr1);
                        }
                        else
                        {
                            //SE NR2 NÃO FOR MAIOR QUE NR1 ENTÃO
                            printf("\n\n A ordem é....: %d %d %d", nr3, nr1, nr2);
                        }
                    }
                }
            }//fimse NR2 < ou = a zero
        }//fimse NR2 < ou = a zero
    }//fimse NR1 < ou = a zero



    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
