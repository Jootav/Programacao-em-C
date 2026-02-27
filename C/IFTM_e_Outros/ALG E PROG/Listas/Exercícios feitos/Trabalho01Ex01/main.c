/*===============================================================
    TRABALHO 01 - EXERCÍCIO 01

    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    Data: 22/09/24

    TRABALHO 01 - EXERCÍCIO 01
    Elabore um algoritmo que solicite ao operador que informe uma série de números cujo elemento finalizador é o zero,
    processe e apresente como saída o valor do cálculo obtido a partir da seguinte fórmula aplicada a cada elemento da
    lista em relação à sua posição (o elemento (número informado) multiplicado pela sua posição na lista e o resultado
    elevado à posição do elemento (número informado) na lista):

    CÁLCULO = ((ELEMENTO DA LISTA) * (POSIÇÃO NA LISTA)) ^ (POSIÇÃO NA LISTA) .

    No final apresente a soma de todos os cálculos realizados, a média aritmética e quantos cálculos foram realizados.



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

    float soma_calc, media_calc;
    float pos_n, n, calc1, calc2;
    int n_calc;

    soma_calc = media_calc = n = calc1 = calc2 = n_calc = 0;

    printf("\nInsira o primeiro número ou zero para finalizar o programa: ");
    scanf("%f", &n);

    while (n != 0) //ENQUANTO O NÚMERO NÃO FOR ZERO, ENTÃO
    {
        //+1 posição, +1 cálculo
        pos_n++;
        n_calc++;

        //CÁLCULO DOS NÚMEROS INSERIDOS
        calc1 = n * pos_n;
        calc2 = pow(calc1, pos_n);

        //MOSTRAR CÁLCULO REALIZADO
        printf("\nO valor do cálculo é: %.2f", calc2);

        soma_calc = soma_calc + calc2;

        //INSERIR OUTRO NÚMERO
        printf("\n\nInsira outro número inteiro ou zero para finalizar o programa: ");
        scanf("%f", &n);
        fflush(stdin);

    }

    if (n_calc == 0) //MENSAGEM CASO NENHUM CÁLCULO/NÚMERO FOR INSERIDO
    {
        printf("\n\nNenhum cálculo foi realizado.");
    }
    else //RELATÓRIO FINAL (CASO HAJA CÁLCULOS SEJAM ESCRITOS)
    {
        media_calc = soma_calc / n_calc;
        printf("\n\n.........RELATÓRIO FINAL........\n\n");
        printf("Quantidade de cálculos...............: %d \n", n_calc);
        printf("Soma de todos os cálculos............: %6.2f \n", soma_calc);
        printf("Media aritmética dos cálculos........: %6.2f \n", media_calc);
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
