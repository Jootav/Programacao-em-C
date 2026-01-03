/*===============================================================
Lista03A_EX006 - Receber o sexo e altura de uma pessoa,
sendo << m>> para o sexo masculino ou << f >> para o
sexo feminino, caso inválido finalizar o programa, senão
fazer o cálculo do peso ideal através da fórmula:
•	Para sexo masculino: peso = (72.7 * alt) – 58
•	para o sexo feminino: peso = (62.1 * alt) – 44.77


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
    char sexo; //vai criar para UM CARACTER
    float vl_altura, vl_peso;

    //INICIALIZAR VARIAVEIS
    sexo = ' '; //tem que ter 1 caracter, que seja o branco
    vl_altura = vl_peso = 0;

    //receber dados
    printf ("\n Digite sexo \n << m >> masculino \n << f >> feminino  \n digite opcao (m, f) ..: ");
    fflush (stdin);
    scanf ("%c", &sexo);
    //verificar
    if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F')
    {
        printf ("\n\n sexo invalido ... ");
    }
    else // senao
    {
        printf ("\n\n digite altura (maior que zero) ....: ");
        fflush (stdin);
        scanf ("%f", &vl_altura);
        //verificar
        if (vl_altura <= 0)
        {
            printf ("\n\n altura invalida ... ");
        }
        else //senao
        {
            //calcular o peso ideal
            if (sexo == 'm' || sexo == 'M')
            {
                vl_peso = (72.7 * vl_altura) - 52;
            }
            else
            {
                vl_peso = (62.1 * vl_altura) - 44.77;
            }//fimse
            printf ("\n\n peso ideal = %2.2f", vl_peso);
        }//fimse da altura
    }//fimse do "se" para sexo

    //FINALIZAR PROGRAMA
    printf ("\n\n\n\n Tchau ... obrigado ... \n\n\n");

    return 0;
}
