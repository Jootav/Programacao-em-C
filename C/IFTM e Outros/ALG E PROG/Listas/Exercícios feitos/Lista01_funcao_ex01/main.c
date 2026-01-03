/*===============================================================


    NOME ALUNO(A):
    CURSO:
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:

    Elabore um algoritmo em linguagem C, que receba um número
    inteiro e positivo, processar e mostrar o resultado da
    soma dos N’s números inteiros começando em 01 (um) variando
    de 1 em 1 até esse número N.
    Obs.:
    1) criar uma função com passagem de parâmetro por “referência”, para validar a entrada de dados
    para que o número de entrada seja positivo.

    2) Criar uma função que receba como parâmetro o “valor” de N, processar dentro desta função o
    somatório solicitado e mostrar os resultado dentro da própria função.


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
void validar (float *n)
{
    int val_int;

    val_int = *n;

    while (*n < 0 || *n != val_int)
    {
        printf("\nDigite um número válido: ");
        fflush(stdin);
        scanf("%f", &*n);
        val_int = *n;
    }
}

void somatorio (int n)
{
    int aux, soma;

    aux = 1;
    soma = 0;

    while (aux <= n)
    {
        soma = soma + aux;
        aux++;
    }
    printf("O somatório de 1 até %d é: %d", n, soma);
}

//===============================================================
//==============  CODIGO PRINCIPAL  =============================
//===============================================================
int main()
{

    setlocale(LC_ALL, "Portuguese");

    //CRIAR VARIAVEIS

    float n;
    int soma;

    //INICIALIZAR VARIAVEIS

    n = 0;

    printf("Digite um número limite para a soma: ");
    fflush(stdin);
    scanf("%f", &n);

    validar(&n);

    somatorio(n);

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
