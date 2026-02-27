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

    int n, maior_n, menor_n;
    float qtd_n, soma_n, media_n;


    n = soma_n = qtd_n = 0;
    maior_n = menor_n = media_n = 0;

    printf("\nInsira o primeiro número inteiro ou zero para finalizar o programa: ");
    scanf("%d", &n);

    while (n != 0)
    {
        qtd_n++;

        //O PRIMEIRO NÚMERO SERÁ MAIOR E MENOR PARA COMPARAÇÃO
        if (qtd_n == 1)
        {
            maior_n = n;
            menor_n = n;
        }

        //CASO SEJA MAIOR QUE O PRIMEIRO NÚMERO, SERA DENOMINADO COMO MAIOR
        if (n > maior_n)
        {
            maior_n = n;
        }

        //CASO SEJA MENOR QUE O PRIMEIRO NÚMERO, SERA DENOMINADO COMO MENOR
        if (n < menor_n)
        {
            menor_n = n;
        }

        //SOMA DE TODOS OS NÚMERO QUE ESTÃO SENDO INSERIDOS
        soma_n = soma_n + n;

        printf("\nInsira outro número inteiro ou zero para finalizar o programa: ");
        scanf("%d", &n);
        fflush(stdin);

    }

    if (qtd_n == 0) //MENSAGEM CASO NENHUM NÚMERO FOR INSERIDO
    {
        printf("\n\nNenhum número inserido.");
    }
    else //RELATÓRIO FINAL (CASO NUMEROS SEJAM ESCRITOS)
    {
        media_n = soma_n / qtd_n;
        printf("\n\n.........RELATÓRIO FINAL.......\n\n");
        printf("Quantidade de números.........: %6.2f \n", qtd_n);
        printf("Soma de todos números.........: %6.2f \n", soma_n);
        printf("Media aritmética dos números..: %6.2f \n", media_n);
        printf("Maior número..................: %6d \n", maior_n);
        printf("Menor número..................: %6d \n", menor_n);
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
