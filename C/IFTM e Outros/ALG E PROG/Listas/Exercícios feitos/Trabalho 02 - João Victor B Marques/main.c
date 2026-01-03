/*
Trabalho 02 - Algoritmos e Programação

== Opção 1:
A Sequencia de CATALAN é formada por: 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796 ... e assim por diante.
É gerada pela fórmula:
ou seja, para “n” começando em 1, variando de 1 em 1 ate numero limite (que o usuário forneceu), temos os seguintes
resultados:

C1 = 1;
C2 = 2;
C3 = 5;
C4 = 14;
C5 = 42;
C6 = 132;
C7 = 429; e;
....
e assim por diante.

Sabe-se que o símbolo de exclamação representa o FATORIAL de um número, o que por sua vez, é a multiplicação
de todos seus termos, começando em 1 ate o número.
Elabore um algoritmo em linguagem C, que crie um vetor numérico de 100 posições, receber via teclado quantos
números (ou seja, quantas posições) o usuário deseja calcular. Processar o cálculo de CATALAN conforme orientado e
armazenar o resultado no vetor. Validar para que seja maior ou igual a 2.
Ao final mostrar um relatório conforme exemplo acima.


== Opção 2:
1) Em uma eleição para representante de sala da sua turma graduação existem quatro candidatos. Receber os nomes dos
candidatos. Os votos são informados através de código. Os dados utilizados para a escrutinagem obedecem à seguinte
codificação:

1, 2, 3, 4 = voto para os respectivos candidatos;
5 = voto nulo;
6 = voto em branco;
0 = voto igual a zero é fim da votação.

Observação: os dados informados devem ser validados.
Elabore um algoritmo que solicite ao operador a série de votos (cujo elemento finalizador é zero) e apresente no final os
seguintes dados:

total de votos para cada candidato;
total de votos nulos;
total de votos em branco;
percentual dos votos em branco e nulos sobre o total geral de votantes;
percentual de votos de cada candidato em relação ao total de votos válidos (branco e nulos não contam).
qual(is) o(s) candidato(s) vencedor(es).

Obs.: usar vetor para armazenar os nomes dos candidatos e também os votos de cada candidato.

    Prof. Ernani Cláudio Borges
    data: 05/11/2024
    Aluno: João Victor Barbosa Marques
==============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#include <locale.h>

#define tam 100
#define tam2 6

//==============================================================
int fatorial(int n)
{
    int fat, cont;
    fat = cont = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (cont <= n)
        {
            fat = fat * cont;
            cont++;
        }
        return fat;
    }
}
//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //ACENTOS
    setlocale(LC_ALL,"");

    //criar vars pro menu
    int opc;
    int i;

    //var da opcao 1
    double vet_catalan[tam], num_lim, calc_catalan;
    double numerador, denominador, n;

    //var da opcao 2
    char vet_cand[tam2][25];
    int opc_v, vet_vot[tam2], i_vencedor;
    float total_votos, total_votos_validos;
    float perc_branconulo, perc_1, perc_2, perc_3, perc_4;

    //inicializar vars

    //laço principal do MENU
    while (opc != 3)
    {
        //inicializar vars da opcao 1
        num_lim = calc_catalan = 0;
        numerador = denominador = 0;
        n = 1;

        i = 0;
        while (i < tam)
        {
            vet_catalan[i] = 0;
            i++;
        }
        //inicializar vars da opcao 2
        total_votos = 0;
        i = 0;

        while (i < tam2)
        {
            strcpy(vet_cand[i], "");
            i++;
        }

        i = 0;
        while (i < tam2)
        {
            vet_vot[i] = 0;
            i++;
        }

        i_vencedor = opc_v = 0;
        perc_1 = perc_2 = perc_3 = perc_4 = perc_branconulo = 0;
        total_votos = total_votos_validos = 0;

        strcpy(vet_cand[4], "Votos nulos");
        strcpy(vet_cand[5], "Votos brancos");
        //

        system ("cls");
        printf ("\n=================MENU==================== \n");
        printf ("\n 1) Números de CATALAN");
        printf ("\n 2) Contagem de Votos");
        printf ("\n 3) Finalizar programa");
        printf ("\n\n Insira uma das opcões.......: ");
        fflush (stdin);
        scanf ("%d", &opc);

        //validar
        while (opc < 1 || opc > 3)
        {
            printf ("\n Opcão inválida ... Digite 1 ou 2 para opções e 3 para finalizar...: ");
            fflush (stdin);
            scanf ("%d", &opc);
        }//fim laço validar opcao

        //IF ELSE OPÇÕES

        if (opc == 1)// OPÇÃO 1
        {
            printf("\n Números de CATALAN\n\n");
            printf(" Insira o número limite (entre 2 e 100): ");
            fflush(stdin);
            scanf("%lf", &num_lim);

            //VALIDAR NUMERO LIMITE
            while (num_lim < 2 || num_lim > 100)
            {
                printf("\n Número limite não permitido. Insira outro: ");
                fflush(stdin);
                scanf("%lf", &num_lim);
            }

            i = 0;
            while (i < num_lim)
            {
                numerador = denominador = calc_catalan = 0;

                numerador = fatorial(2*n);
                denominador = fatorial(n+1) * fatorial(n);
                calc_catalan = numerador / denominador;
                vet_catalan[i] = calc_catalan;

                //NÚMEROS NÃO PASSAM DO 5???
                //VARIÁVEL ESTOURANDO -> NÃO COMPORTA FATORIAL

                printf("\n C(%d) = %.0f / %.0f = %.0f", i+1, numerador, denominador, vet_catalan[i]);

                n++;
                i++;
            }
            getch();
        }
        else // SE NÃO FOR 1
        {
            if (opc == 2) // OPÇÃO 2
            {
                i = 0;
                while (i < 4)
                {
                    printf("\n Insira o nome do candidato [%d]: ", i+1);
                    fflush(stdin);
                    gets(vet_cand[i]);

                    i++;
                }

                system("cls");
                printf("\n ===========TABELA DE VOTAÇÕES===========");
                printf("\n [1] Candidato: %s", vet_cand[0]);
                printf("\n [2] Candidato: %s", vet_cand[1]);
                printf("\n [3] Candidato: %s", vet_cand[2]);
                printf("\n [4] Candidato: %s", vet_cand[3]);
                printf("\n [5] Voto nulo.");
                printf("\n [6] Voto branco.");

                printf("\n\n Insira seu primeiro voto ou 0 para finalizar votação: ");
                fflush(stdin);
                scanf("%d", &opc_v);

                //validar
                while (opc_v < 1 || opc_v > 6)
                {
                    printf ("\n Opcão inválida ... Digite uma opção válida ou 0 para finalizar...: ");
                    fflush (stdin);
                    scanf ("%d", &opc_v);
                }//fim laço validar opcao

                while (opc_v != 0)
                {
                    total_votos++;
                    if (opc_v == 5 || opc_v == 6)
                    {
                        if (opc_v == 5)
                        {
                            vet_vot[4] = vet_vot[4] + 1;
                        }
                        else
                        {
                            vet_vot[5] = vet_vot[5] + 1;
                        }
                    }
                    else
                    {
                        if (opc_v == 1)
                        {
                            vet_vot[0] = vet_vot[0] + 1;
                        }
                        else
                        {
                            if (opc_v == 2)
                            {
                                vet_vot[1] = vet_vot[1] + 1;
                            }
                            else
                            {
                                if (opc_v == 3)
                                {
                                    vet_vot[2] = vet_vot[2] + 1;
                                }
                                else
                                {
                                    vet_vot[3] = vet_vot[3] + 1;
                                }
                            }
                        }
                    }

                    printf("\n Insira seu próximo voto: ");
                    fflush(stdin);
                    scanf("%d", &opc_v);
                }
                i_vencedor = 0;
                i = 0;
                while (i < tam2)
                {
                    if (vet_vot[i] > vet_vot[i_vencedor])
                    {
                        i_vencedor = i;
                    }
                    i++;
                }
                if (total_votos == 0)
                {
                    printf("\n Nenhum voto foi registrado...");
                    getch();
                }
                else
                {
                    printf("\n ===================================Relatório===================================");
                    printf("\n\n Total de votos para candidato [1]............................: %d", vet_vot[0]);
                    printf("\n Total de votos para candidato [2]............................: %d", vet_vot[1]);
                    printf("\n Total de votos para candidato [3]............................: %d", vet_vot[2]);
                    printf("\n Total de votos para candidato [4]............................: %d", vet_vot[3]);
                    printf("\n Total de votos nulos.........................................: %d", vet_vot[4]);
                    printf("\n Total de votos brancos.......................................: %d", vet_vot[5]);

                    perc_branconulo = ((vet_vot[4] + vet_vot[5]) / total_votos) * 100;
                    printf("\n Percentual de votos brancos e nulos..........................: %.2f", perc_branconulo);

                    total_votos_validos = vet_vot[0] + vet_vot [1] + vet_vot[2] + vet_vot[3];
                    perc_1 = (vet_vot[0] * 100) / total_votos_validos;
                    perc_2 = (vet_vot[1] * 100) / total_votos_validos;
                    perc_3 = (vet_vot[2] * 100) / total_votos_validos;
                    perc_4 = (vet_vot[3] * 100) / total_votos_validos;

                    printf("\n Percentual candidato [1] em relação ao total de votos válidos: %.2f", perc_1);
                    printf("\n Percentual candidato [2] em relação ao total de votos válidos: %.2f", perc_2);
                    printf("\n Percentual candidato [3] em relação ao total de votos válidos: %.2f", perc_3);
                    printf("\n Percentual candidato [4] em relação ao total de votos válidos: %.2f", perc_4);
                    printf("\n Candidato(s) vencedor(es): ");
                    i = 0;
                    while (i < tam2)
                    {
                        if (vet_vot[i_vencedor] == vet_vot[i])
                        {
                            printf("\n %s com %d votos.", vet_cand[i], vet_vot[i]);
                        }
                        i++;
                    }
                    getch();
                }
            }
            else // FINALIZAR
            {
                printf("\n\n Finalizando!\n");
            }
        }
    }

    printf("\n\n Acabou!\n");
    return 0;
}
