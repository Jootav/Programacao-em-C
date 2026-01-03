#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#define tam 500
#define tam2 100

/*
Aluno: João Victor Barbosa Marques
Curso: Engenharia de Computação
CPF: 10150037619
Data: 05/11/2024
*/

//FUNÇÕES

void rodar_vetor (int vet[])
{
    int i, j, aux, aux2;
    i = j = aux = aux2 = 0;

    while (i < tam)
    {
        if (i == 0)
        {
            aux = vet[tam-1];
            vet[tam-1] = vet[tam-2];
            aux2 = vet[i];
            vet[i] = aux;
        }
        else
        {
            aux = vet[i];
            vet[i] = aux2;
            aux2 = aux;
        }
        i++;
    }

}

void ordenar_vetor (int vet[])
{
    int i, j, aux;
    i = j = aux = 0;

    while (j < tam)
    {
        i = 0;
        while (i < tam-1)
        {
            if (vet[i] > vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
            i++;
        }
        j++;
    }
}

void mostrar_vetor (int vet[])
{
    int i, cont, aux;

    cont = 0;
    i = aux = 0;

    while (i < tam)
    {
        printf("%5d", vet[i]);
        i++;
    }
}

void validar_vetor (int vet[], int *i)
{
    int j;

    j = 0;
    if (vet[*i] == 0)
    {
        printf("\n zero invalido, gerando outro: ");
        (*i)--;
    }
    else
    {
        while(j<*i && vet[*i] != vet[j])
        {
            j++;
        }
        if (j<*i)
        {
            printf("\n numero repetido na posicao %d, gerando outro: ", j+1);
            (*i)--;
        }
    }
}

void gerar_vetor (int vet[])
{
    int i;
    i=0;
    while (i < tam)
    {
        vet[i] = rand() % (tam*2);
        printf("\n vetor [%d] = %d", i+1, vet[i]);
        validar_vetor(vet, &i);
        Sleep(20);
        i++;
    }
}

//

int main()
{
    //MENU
    int opc;
    int i;

    //VAR QUESTAO 1
    int vet[tam], opc_r;
    //VAR QUESTAO 2
    int vet_a[tam2], vet_b[tam2], i_atual;
    int vet_uniao[tam2*2], vet_inter[tam2*2], vet_dif[tam2*2];
    //INICIALIZAR VAR MENU
    opc = 0;
    //INICIALIZAR VAR QUESTAO 1
    opc_r=i=0;
    while (i < tam)
    {
        vet[i] = 0;
        i++;
    }

    //INICIALIZAR VAR QUESTAO 2

    i=0;
    while (i < tam2)
    {
        vet_a[i] = 0;
        vet_b[i] = 0;
        i++;
    }

    while (opc != 3)
    {
        opc_r=0;

        system("cls");
        printf("\n ==========MENU PRINCIPAL==========");
        printf("\n 1 - Rodar conteudo de posicoes no vetor");
        printf("\n 2 - Uniao, intersecao e diferenca");
        printf("\n 3 - Finalizar algoritmo");
        printf("\n Informe uma das opcoes (1, 2 ou 3): ");
        fflush(stdin);
        scanf("%d", &opc);

        while(opc < 1 || opc > 3)
        {
            printf("\n Insira uma opcao valida (1, 2 ou 3): ");
            fflush(stdin);
            scanf("%d", &opc);
        }

        if (opc == 3)
        {
            printf("\n Finalizando...");
        }
        else
        {
            if (opc == 1)
            {
                printf("\n\nGerando vetor...");
                gerar_vetor(vet);
                getch();

                system("cls");
                printf("\nVetor na sua forma de entrada: \n");
                mostrar_vetor(vet);
                getch();

                printf("\nVetor na sua forma ordenada: \n");
                ordenar_vetor(vet);
                mostrar_vetor(vet);
                getch();

                printf("\nVetor na sua forma 'rodada': \n");
                while (opc_r != 2)
                {
                    rodar_vetor(vet);
                    mostrar_vetor(vet);

                    printf("\n\n Deseja 'rodar' novamente?");
                    printf("\n 1 - sim || 2 - nao \n");
                    fflush(stdin);
                    scanf("%d", &opc_r);
                }
            }
            else
            {

            }
        }
    }
}
