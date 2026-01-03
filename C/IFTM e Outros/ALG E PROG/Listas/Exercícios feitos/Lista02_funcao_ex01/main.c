/*===============================================================


    NOME ALUNO(A):
    CURSO:
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:

    Elabore um algoritmo em linguagem C, que receba três números inteiros, representando horas,
    minutos e segundos. Processar e mostrar a conversão total em segundos.
    Exemplo: 2h, 40 min e 10 seg correspondem a 9610 segundos.
    Obs.:

    1) Criar uma única função com passagem de parâmetro por “valor”, para validar as entradas (horas,
    minutos e segundos (cada um em seu tempo de entrada)) para serem maior ou igual a zero;
    2) criar uma função que receba esses TRÊS PARÂMETROS de entrada (hora, minuto e segundo),
    processar a conversão para SEGUNDOS e retornar esse valor para o código principal, onde será
    mostrado para o usuário.

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
#define tam1 5

#include <locale.h>

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

int validar_opc (int *opc)
{
    while (*opc < 0 || *opc > 4)
    {
        printf("Opção inválida. Insira uma opção de 1 a 4: ");
        fflush(stdin);
        scanf("%d", *opc);
    }
    return (*opc);
}

int menu (int x)
{
    printf("====================CALCULADORA====================");
    printf("\n1) Fatorial de um número");
    printf("\n2) Resto de uma divisão entre dois números inteiros.");
    printf("\n3) Exponencial entre dois números.");
    printf("\n4) Finalizar programa.");
    printf("\nDigite uma das opções acima: ");
    fflush(stdin);
    scanf("%d", x);

    x = validar_opc(x);

    return(x);
}

//===============================================================
//==============  CODIGO PRINCIPAL  =============================
//===============================================================
int main()
{

    setlocale(LC_ALL, "Portuguese");

    //CRIAR VARIAVEIS

    int opc;
    float

    //INICIALIZAR VARIAVEIS

    opc = 0;

    //

    opc = menu(opc);

    while (opc != 4)
    {
        if (opc == 1)
        {



        }
        else
        {
            if (opc == 2)
            {

            }
            else
            {

            }
        }

        opc = menu(opc);
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
