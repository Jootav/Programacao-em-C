/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:


    Letra H) N , ... , 5 , 4 , 3 , 2 , 1 , 0 , -1 , -2 , -3 , -4 , -5 , ... , -N



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

    char resp;
    int cont, qtd_conv;
    float temp_c, temp_f;

    //atribuição direta
    resp = 's';

    while (resp == 's' || resp == 'S')
    {
        qtd_conv = 0;
        temp_f = 32;
        cont = 1;

        printf("\nInsira a quantidade de conversões para Fahrenheit: ");
        scanf("%d", &qtd_conv);
        fflush(stdin);

        while (qtd_conv <= 0)
        {
            printf("\n\nNúmero inválido. Escreva novamente: ");
            scanf("%d", &qtd_conv);
            fflush(stdin);
        }

        while (cont <= qtd_conv)
        {
            temp_c = 5 / 9 * (temp_f - 32)
            printf("\n %2.2f Celsius = %2.2f Fahrenheint\n", temp_c, temp_f);
            temp_f++;
            cont++;
            Sleep(150);
        }

        printf("\nDeseja continuar o cálculo?\n");
        printf("\n<<s>> para sim");
        printf("\n<<n>> para não\n\n");
        scanf("%c", &resp);
        fflush(stdin);

        while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N')
        {
            system("cls");
            printf("\n\nInsira uma resposta válida.\n");
            scanf("%c", &resp);
            fflush(stdin);
        }

    }


    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
