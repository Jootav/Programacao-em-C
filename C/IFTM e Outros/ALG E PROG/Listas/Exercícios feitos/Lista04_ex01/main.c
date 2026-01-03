/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:


    laborar um algoritmo que receba dois números e um o símbolo para representação as operação básicas da
    matemática ( +, - , *, / , ou seja: adição, subtração, multiplicação, divisão) processar e mostrar o
    resultado da operação do primeiro número pelo segundo.
    Obs.:
    a) verificar para que não haja divisão por zero, caso aconteça, dê uma mensagem ao usuário.
    b) Finalizar o algoritmo caso o sinal informado seja diferente dos sinais das operações básicas solicitadas.



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
    float nr1, nr2, res;
    char operador;

    //INICIALIZAR VARIAVEIS
    nr1 = nr2 = res = 0;
    operador = ' ';

    printf("\n Insira o primeiro número.................: ");
    fflush(stdin);
    scanf("%f", &nr1);

    printf("\n Insira o segundo número..................: ");
    fflush(stdin);
    scanf("%f", &nr2);

    printf("\n Insira o operador (+, -, *, /) ..........: ");
    fflush(stdin);
    scanf("%c", &operador);

    if (operador == '+') //ADIÇÃO
    {
        res = nr1 + nr2;
        printf("\n==========================================");
        printf("\n O resultado da operação %2.2f %c %2.2f = %2.2f \n", nr1, operador, nr2, res);
        printf("==========================================");
    }
    else
    {
        if (operador == '-') //SUBTRAÇÃO
        {
            res = nr1 - nr2;
            printf("\n==========================================");
            printf("\n O resultado da operação %2.2f %c %2.2f = %2.2f \n", nr1, operador, nr2, res);
            printf("==========================================");
        }
        else
        {
            if (operador == '*') //MULTIPLICAÇÃO
            {
                res = nr1 * nr2;
                printf("\n==========================================");
                printf("\n O resultado da operação %2.2f %c %2.2f = %2.2f \n", nr1, operador, nr2, res);
                printf("==========================================");
            }
            else
            {
                if (operador == '/') //DIVISÃO
                {
                    if (nr2 == 0) //SE NR2 = 0, NÃO HAVERÁ DIVISÃO
                    {
                        printf("\n==========================================");
                        printf("\n Impossível divisão por zero. \n");
                        printf("==========================================");
                    }
                    else
                    {
                        res = nr1 / nr2;
                        printf("\n==========================================");
                        printf("\n O resultado da operação %2.2f %c %2.2f = %2.2f \n", nr1, operador, nr2, res);
                        printf("==========================================");
                    }
                }
                else
                {
                    //NÃO INSERIU NENHUM OPERADOR VÁLIDO
                    printf("\n==========================================");
                    printf("\n Você inseriu nenhum operador válido. \n");
                    printf("==========================================");
                }
            }

        }
        printf("\n==========================================");
        printf("\n O resultado da operação %2.2f %c %2.2f = %2.2f \n", nr1, operador, nr2, res);
        printf("==========================================");
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
