/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
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
    setlocale(LC_ALL,"");

    //CRIAR VARIAVEIS
    int expo, aux, cont, res;
    float expo_final, base;
    char resp;

    resp = 's';

    while (resp == 's' || resp == 'S')
    {
        expo = aux = base = expo_final = 0;
        cont = res = 1;

        system("cls");

        printf("\nDigite o número da base (positivo e inteiro): ");
        fflush(stdin);
        scanf("%f", &base);
        aux = base;

        while (base <= 0 || aux != base)
        {
            printf("\nDigite um número válido (positivo e inteiro): ");
            fflush(stdin);
            scanf("%f", &base);
            aux = base;
        }

        printf("\nDigite o expoente final (positivo e inteiro): ");
        fflush(stdin);
        scanf("%f", &expo_final);
        aux = expo_final;

        while (expo_final <= 0 || aux != expo_final)
        {
            printf("\nDigite um expoente válido (positivo e inteiro): ");
            fflush(stdin);
            scanf("%f", &base);
            aux = expo_final;
        }

        //Cálculos

        while (expo <= expo_final)
        {
            while (cont <= expo)
            {
                res = res * base;
                cont++;
            }
            printf("\nO resultado de %.0f elevado a %d é: %d", base, expo, res);
            expo++;
        }

        printf("\n\nDeseja digitar outro número? ");
        printf("\n<<s>> para SIM e <<n>> para NÃO\n");
        fflush(stdin);
        scanf("%c", &resp);

        while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N')
        {
            printf("\n\nDigite uma resposta válida. ");
            printf("\n<<s>> para SIM e <<n>> para NÃO\n");
            fflush(stdin);
            scanf("%c", &resp);
        }

    }//laço principal


    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
