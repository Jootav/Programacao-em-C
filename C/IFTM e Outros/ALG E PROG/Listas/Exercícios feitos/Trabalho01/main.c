/*
    TRABALHO 01 - EXERCÍCIO 01 e EXERCÍCIO 02

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

    TRABALHO 01 - EXERCÍCIO 02

    Em uma eleição para representante de sala da sua turma graduação existem quatro candidatos. Receber os nomes dos
    candidatos. Os votos são informados através de código. Os dados utilizados para a escrutinagem obedecem à seguinte
    codificação:
    1, 2, 3, 4 = voto para os respectivos candidatos;
    5 = voto nulo;
    6 = voto em branco;
    0 = fim da votação.
    Observação: o dado informado deve ser validado.
    Elabore um algoritmo que solicite ao operador a série de votos (cujo elemento finalizador é zero) e apresente no final os
    seguintes dados:
    total de votos para cada candidato;
    total de votos nulos;
    total de votos em branco;
    percentual dos votos em branco e nulos sobre o total geral de votantes;
    qual(is) o(s) candidato(s) vencedor(es).



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

#define tam1 5
#define tam1 5

//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    setlocale(LC_ALL,"");

    //criar vars
    int opc, tecla;

    //var da opcao 1
    float soma_calc, media_calc;
    float pos_n, n, calc1, calc2;
    int n_calc;

    //var da opcao 2
    int qtd_total, voto, total1, total2, total3, total4, total_nulo, total_branco;
    char cand_1[30], cand_2[30], cand_3[30], cand_4[30], vencedor[30];
    float percentual, total_branco_nulo;

    //inicializar vars
    opc = tecla = 0;

    //laço principal do MENU
    while (opc != 3)
    {
        //inicializar vars da opcao 1
        soma_calc = pos_n = media_calc = n = calc1 = calc2 = n_calc = 0;

        //inicializar vars da opcao 2
        voto = 0;

        total1 = total2 = total3 = total4 = total_nulo = total_branco = 0;

        strcpy(cand_1, "");
        strcpy(cand_2, "");
        strcpy(cand_3, "");
        strcpy(cand_4, "");
        strcpy(vencedor, "");

        //MENU PARA OS EXERCÍCIOS

        system ("cls");

        printf ("\n      MENU \n");
        printf ("\n 1) Exercício 1");
        printf ("\n 2) Exercício 2");
        printf ("\n 3) Finalizar");
        printf ("\n\n Digite uma das opções ..: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 3)
        {
            printf ("\n Insira uma opção válida ... Digite 1, 2 ou 3 para fim ...: ");
            fflush (stdin);
            scanf ("%d", &opc);
        }//fim laço validar opcao

        //verificar qual opcao
        if (opc == 3)
            printf ("\n\n Finalizando . . .");
        else
        {
            if (opc == 2) // EXERCÍCIO 2
            {
                printf("\n\nInsira o nome do primeiro candidato: ");
                fflush(stdin);
                gets (cand_1);

                while (strcmp(cand_1, "") == 0)
                {
                    printf("\n\nVocê não digitou, escreva novamente o candidato 1: ");
                    fflush(stdin);
                    gets (cand_1);
                }

                printf("\n\nInsira o nome do segundo candidato: ");
                fflush(stdin);
                gets (cand_2);

                while (strcmp(cand_2, "") == 0)
                {
                    printf("\n\nVocê não digitou, escreva novamente o candidato 2: ");
                    fflush(stdin);
                    gets (cand_2);
                }

                printf("\n\nInsira o nome do terceiro candidato: ");
                fflush(stdin);
                gets (cand_3);

                while (strcmp(cand_3, "") == 0)
                {
                    printf("\n\nVocê não digitou, escreva novamente o candidato 3: ");
                    fflush(stdin);
                    gets (cand_3);
                }

                printf("\n\nInsira o nome do quarto candidato: ");
                fflush(stdin);
                gets (cand_4);

                while (strcmp(cand_4, "") == 0)
                {
                    printf("\n\nVocê não digitou, escreva novamente o candidato 4: ");
                    fflush(stdin);
                    gets (cand_4);
                }

                printf("\n\n==================================");
                printf("\n1 - %s", cand_1);
                printf("\n2 - %s", cand_2);
                printf("\n3 - %s", cand_3);
                printf("\n4 - %s", cand_4);
                printf("\n5 - Nulo");
                printf("\n6 - Branco");
                printf("\n0 - Finalizar votação");
                printf("\n\n==================================");
                printf("\nInsira o primeiro voto preferido: ");
                fflush(stdin);
                scanf("%d", &voto);

                while (voto < 0 || voto > 6)
                {
                    printf("\nInsira um voto válido: ");
                    fflush(stdin);
                    scanf("%d", &voto);
                }

                while (voto != 0) //ENQUANTO O NÚMERO NÃO FOR ZERO, ENTÃO
                {
                    qtd_total++;

                    if (voto == 1)
                    {
                        total1++; //SE VOTO = 1, TOTAL DE VOTOS 1 ++
                    }
                    else
                    {
                        if (voto == 2)
                        {
                            total2++; //SE VOTO = 2, TOTAL DE VOTOS 2 ++
                        }
                        else
                        {
                            if (voto == 3)
                            {
                                total3++; //SE VOTO = 3, TOTAL DE VOTOS 3 ++
                            }
                            else
                            {
                                if (voto == 4)
                                {
                                    total4++; //SE VOTO = 4, TOTAL DE VOTOS 4 ++
                                }
                                else
                                {
                                    if (voto == 5)
                                    {
                                        total_nulo++; //SE VOTO BRANCO, TOTAL DE VOTOS BRANCO ++
                                    }
                                    else
                                    {
                                        total_branco++; //SE VOTO NULO, TOTAL DE VOTOS NULO ++
                                    }
                                }
                            }
                        }
                    }

                    system("cls");
                    printf("\n\n==================================");
                    printf("\n1 - %s", cand_1);
                    printf("\n2 - %s", cand_2);
                    printf("\n3 - %s", cand_3);
                    printf("\n4 - %s", cand_4);
                    printf("\n5 - Nulo");
                    printf("\n6 - Branco");
                    printf("\n0 - Finalizar votação");
                    printf("\n\n==================================");
                    printf("\nInsira outro voto preferido: ");
                    fflush(stdin);
                    scanf("%d", &voto);

                }

                if (total1 >= total2 && total1 >= total3 && total1 >= total4)
                {
                    if (total1 == total2)
                    {
                        //CONCATENAÇÃO CAND 1 E CAND 2
                        strcat(vencedor, cand_1);
                        strcat(vencedor, " e ");
                        strcat(vencedor, cand_2);
                    }
                    else
                    {
                        if (total1 == total3)
                        {
                            //CONCATENAÇÃO CAND 1 E 3
                            strcat(vencedor, cand_1);
                            strcat(vencedor, " e ");
                            strcat(vencedor, cand_3);
                        }
                        else
                        {
                            if (total1 == total4)
                            {
                                //CONCATENAÇÃO CAND 1 E 4
                                strcat(vencedor, cand_1);
                                strcat(vencedor, " e ");
                                strcat(vencedor, cand_4);
                            }
                            else
                            {
                                strcpy(vencedor, cand_1);
                            }
                        }
                    }
                }
                else
                {
                    if (total2 >= total1 && total2 >= total3 && total2 >= total4)
                    {
                        if (total2 == total1)
                        {
                            //CONCATENAÇÃO CAND 1 E CAND 2
                            strcat(vencedor, cand_2);
                            strcat(vencedor, " e ");
                            strcat(vencedor, cand_1);
                        }
                        else
                        {
                            if (total2 == total3)
                            {
                                //CONCATENAÇÃO CAND 1 E 3
                                strcat(vencedor, cand_2);
                                strcat(vencedor, " e ");
                                strcat(vencedor, cand_3);
                            }
                            else
                            {
                                if (total2 == total4)
                                {
                                    //CONCATENAÇÃO CAND 1 E 4
                                    strcat(vencedor, cand_2);
                                    strcat(vencedor, " e ");
                                    strcat(vencedor, cand_4);
                                }
                                else
                                {
                                    strcpy(vencedor, cand_2);
                                }
                            }
                        }
                    }
                    else
                    {
                        if (total3 >= total1 && total3 >= total2 && total3 >= total4)
                        {
                            if (total3 == total1)
                            {
                                //CONCATENAÇÃO CAND 1 E CAND 2
                                strcat(vencedor, cand_3);
                                strcat(vencedor, " e ");
                                strcat(vencedor, cand_1);
                            }
                            else
                            {
                                if (total3 == total2)
                                {
                                    //CONCATENAÇÃO CAND 1 E 3
                                    strcat(vencedor, cand_3);
                                    strcat(vencedor, " e ");
                                    strcat(vencedor, cand_2);
                                }
                                else
                                {
                                    if (total3 == total4)
                                    {
                                        //CONCATENAÇÃO CAND 1 E 4
                                        strcat(vencedor, cand_3);
                                        strcat(vencedor, " e ");
                                        strcat(vencedor, cand_4);
                                    }
                                    else
                                    {
                                        strcpy(vencedor, cand_3);
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (total4 >= total1 && total4 >= total2 && total4 >= total3)
                            {
                                if (total4 == total1)
                                {
                                    //CONCATENAÇÃO CAND 1 E CAND 2
                                    strcat(vencedor, cand_4);
                                    strcat(vencedor, " e ");
                                    strcat(vencedor, cand_1);
                                }
                                else
                                {
                                    if (total4 == total2)
                                    {
                                        //CONCATENAÇÃO CAND 1 E 3
                                        strcat(vencedor, cand_4);
                                        strcat(vencedor, " e ");
                                        strcat(vencedor, cand_2);
                                    }
                                    else
                                    {
                                        if (total4 == total3)
                                        {
                                            //CONCATENAÇÃO CAND 1 E 4
                                            strcat(vencedor, cand_4);
                                            strcat(vencedor, " e ");
                                            strcat(vencedor, cand_3);
                                        }
                                        else
                                        {
                                            strcpy(vencedor, cand_4);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                if (total_branco >= total1 && total_branco >= total2 && total_branco >= total3 && total_branco >= total4)
                {
                    strcpy(vencedor, "Votos brancos");
                }
                else
                {
                    if (total_nulo >= total1 && total_nulo >= total2 && total_nulo >= total3 && total_nulo >= total4)
                    {
                        strcpy(vencedor, "Votos nulos");
                    }
                }

                if (qtd_total == 0) //MENSAGEM CASO NENHUM VOTO FOR INSERIDO
                {
                    printf("\n\nNenhum voto foi colocado.");
                }
                else //RELATÓRIO FINAL (CASO HAJA CÁLCULOS SEJAM ESCRITOS)
                {
                    total_branco_nulo = total_branco + total_nulo;
                    percentual = total_branco_nulo / qtd_total * 100;
                    printf("\n\n==============================================================");
                    printf("\n\n.........RELATÓRIO FINAL........\n\n");
                    printf("\nTotal de votos para candidato 1 - %s ...............: %d", cand_1, total1);
                    printf("\nTotal de votos para candidato 2 - %s ...............: %d", cand_2, total2);
                    printf("\nTotal de votos para candidato 3 - %s ...............: %d", cand_3, total3);
                    printf("\nTotal de votos para candidato 4 - %s ...............: %d", cand_4, total4);
                    printf("\nTotal de votos brancos - ...........................: %d", total_branco);
                    printf("\nTotal de votos nulos - .............................: %d", total_nulo);
                    printf("\nPercentual de votos brancos e nulos ................: %.1f", percentual);
                    printf("\nCandidato vencedor .................................: %s", vencedor);
                    printf("\n\n==============================================================");
                }
            }
            else // EXERCÍCIO 1
            {
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

            }//fim opcao 2 e 1
            printf ("\n\n Pressione \"ESC\" para voltar ao menu ...");
            tecla = getch();
            while (tecla != 27)
            {
                printf ("\n Tecla inválida . . . Pressione \"ESC\" ");
                tecla = getch();
            }
        }//fim da opcao 3
    }//fim laço do menu

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
