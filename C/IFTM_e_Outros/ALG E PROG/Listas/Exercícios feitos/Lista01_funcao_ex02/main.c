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

int validar (int x, int pos)
{
    if (pos == 1)
    {
        while (x < 0)
        {
            printf("Insira um número para horas válido (maior ou igual a zero): ");
            fflush(stdin);
            scanf("%d", h)
        }
    }
    else
    {
        if (pos == 2)
        {
            while (x < 0 || x > 59)
            {
                printf("Insira um número para minutos válido (entre 0 e 59): ");
                fflush(stdin);
                scanf("%d", x)
            }
        }
        else
        {
            while (x < 0 || x > 59)
            {
                printf("Insira um número para segundos válido (entre 0 e 59): ");
                fflush(stdin);
                scanf("%d", x)
            }
        }
    }

    return(x);
}

//===============================================================
//==============  CODIGO PRINCIPAL  =============================
//===============================================================
int main()
{

    setlocale(LC_ALL, "Portuguese");

    //CRIAR VARIAVEIS

    int h, min, seg, pos;

    //INICIALIZAR VARIAVEIS

    h = min = seg = 0;

    pos = 1;

    printf("Insira as horas: ");
    fflush(stdin);
    scanf("%d", &h);

    h = validar(h, pos);

    pos = 2;

    printf("Insira os minutos: ");
    fflush(stdin);
    scanf("%d", &min);

    min = validar(min, pos);

    pos = 3;

    printf("Insira os segundos: ");
    fflush(stdin);
    scanf("%d", &seg);

    seg = validar(seg, pos);

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
