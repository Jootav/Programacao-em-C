/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:


    Letra G) N , ... , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0


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
    int n, n_limite;
    int cont = 1;

    n = n_limite = 0;

    printf("Digite o número limite (positivo): ");
    scanf("%d", &n_limite);
    printf("\n");

    while (n <= n_limite)
    {
        if (cont <= 5)
        {
            printf("%5d", n_limite);
            n_limite = n_limite - 1;
            Sleep(100);
            cont++;
        }
        else
        {
            cont = 1;
            printf("\n");

        }

    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
