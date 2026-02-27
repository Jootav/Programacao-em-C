/*
    Exemplo de como criar MENU com duas opcoes de calculo,
    sendo:
    * opcao 1: calcular o fatorial de um numero
    * opcao 2: calcular o Exponencial de um numero, vamos
               receber dois numeros, o primeiro será base,
               o segundo será o expoente.


    Prof. Ernani Cláudio Borges
    data: 10/09/2024
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
    //ACENTOS
    setlocale(LC_ALL,"");

    //criar vars pro menu
    int opc;

    //var da opcao 1
    int n, n_aux, n_limite, soma, qtd_perfeito;

    //var da opcao 2
    int qtd_orc, larg, comp;
    float valor_area, preco_vidro, resto, soma_vidro;
    float maior_orc, menor_orc;

    //var da opcao 3

    float som, num, den;
    int sinal, qtd_termos, aux, cont_sinal;

     //var da opcao 4

    //inicializar vars


    //laço principal do MENU
    while (opc != 5)
    {
        //inicializar vars da opcao 1

        n = n_aux = 2;
        n_limite = 0;

        //inicializar vars da opcao 2

        qtd_orc = larg = comp = 0;
        valor_area = preco_vidro = resto = soma_vidro = 0;
        maior_orc = menor_orc = 0;

        //inicializar vars da opcao 3

        cont_sinal = 1;
        som = qtd_termos = 0;
        num = 1000;
        den = 5;
        sinal = 1;

        //inicializar vars da opcao 4

        system ("cls");

        printf ("\n=================MENU==================== \n");
        printf ("\n 1) Número perfeito");
        printf ("\n 2) Vidraçaria");
        printf ("\n 3) Sequencia com variação de sinal");
        printf ("\n 4) ");
        printf ("\n 5) Finalizar programa");
        printf ("\n\n Insira uma das opcões.......: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 5)
        {
            printf ("\nOpcão inválida ... Digite 1, 2 ou 3 para opções e 4 para finalizar...: ");
            fflush (stdin);
            scanf ("%d", &opc);

        }//fim laço validar opcao

        //IF ELSE OPÇÕES

        if (opc == 1)// OPÇÃO 1
        {
            printf ("\n===============Número perfeito===============");
            printf ("\nDigite o número limite (maior que dois): ");
            fflush(stdin);
            scanf("%d", &n_limite);

            while(n_limite < 2)
            {
                printf ("\nInsira um número válido. . . : ");
                fflush(stdin);
                scanf("%d", &n_limite);
            }

            qtd_perfeito = 0;

            while(n <= n_limite)
            {
                n_aux = 1;
                soma = 0;
                while(n_aux < n)
                {
                    if (n % n_aux == 0)
                    {
                        soma = soma + n_aux;
                    }
                    n_aux++;
                }
                if (soma == n)
                {
                    printf("%d é um número perfeito\n", n_aux);
                    qtd_perfeito++;
                }
                n++;
            }
            if (qtd_perfeito == 0)
            {
                printf("\n\nNão houve número perfeito nesse intervalo. ");
            }
        }
        else // SE NÃO FOR 1
        {
            if (opc == 2) // OPÇÃO 2
            {
                printf ("\n===============Vidraçaria===============");
                printf ("\nDigite o valor do milímetro quadrado ou 0 para finalizar: ");
                fflush(stdin);
                scanf("%f", &valor_area);

                while (valor_area != 0)
                {

                    qtd_orc++;

                    printf ("\nDigite a largura do vidro (acima de zero): ");
                    fflush(stdin);
                    scanf("%d", &larg);

                    while (larg <= 0)
                    {
                        printf ("\nDigite uma largura válida (acima de zero): ");
                        fflush(stdin);
                        scanf("%d", &larg);
                    }

                    printf ("\nDigite a comprimento do vidro (acima de zero): ");
                    fflush(stdin);
                    scanf("%d", &comp);

                    while (comp <= 0)
                    {
                        printf ("\nDigite um comprimento válido (acima de zero): ");
                        fflush(stdin);
                        scanf("%d", &larg);
                    }

                    resto = comp % 5;

                    if (resto != 0)
                    {
                        if (resto == 1)
                        {
                            comp = comp + 4;
                        }
                        else
                        {
                            if (resto == 2)
                            {
                                comp = comp + 3;
                            }
                            else
                            {
                                if (resto == 3)
                                {
                                    comp = comp + 2;
                                }
                                else
                                {
                                    comp = comp + 1;
                                }
                            }
                        }
                    }

                    resto = larg % 5;

                    if (resto != 0)
                    {
                        if (resto == 1)
                        {
                            larg = larg + 4;
                        }
                        else
                        {
                            if (resto == 2)
                            {
                                larg = larg + 3;
                            }
                            else
                            {
                                if (resto == 3)
                                {
                                    larg = larg + 2;
                                }
                                else
                                {
                                    larg = larg + 1;
                                }
                            }
                        }
                    }

                    preco_vidro = (larg * comp) * valor_area;
                    soma_vidro = soma_vidro + preco_vidro;

                    printf("\n\nO valor a ser pago será: %.2f", preco_vidro);

                    if (qtd_orc == 1)
                    {
                        maior_orc = menor_orc = preco_vidro;
                    }
                    else
                    {
                        if (preco_vidro > maior_orc)
                        {
                            maior_orc = preco_vidro;
                        }
                        if (preco_vidro < menor_orc)
                        {
                            menor_orc = preco_vidro;
                        }
                    }

                    printf ("\n\nDigite o valor do milímetro quadrado ou 0 para finalizar: ");
                    fflush(stdin);
                    scanf("%f", &valor_area);

                }

                if (qtd_orc == 0)
                {
                    printf("\n\nNão houve orçamentos calculados.");
                }
                else
                {
                    printf("\n==========ORÇAMENTOS==========");
                    printf("\nOrçamentos calculados......: %d", qtd_orc);
                    printf("\nValor total dos orçamentos.: %.2f", soma_vidro);
                    printf("\nMaior orçamento............: %.2f", maior_orc);
                    printf("\nMenor orçamento............: %.2f", menor_orc);
                    printf("\n==============================");
                }


            }
            else // SE NAO FOR 2
            {
                if (opc == 3) // OPÇÃO 3
                {

                    printf("\n\nDigite a quantidade de termos que deseja calcular (maior que zero): ");
                    fflush(stdin);
                    scanf("%d", &qtd_termos);

                    while (qtd_termos < 0)
                    {
                        printf("\n\nInsira um número válido (maior que zero)");
                        fflush(stdin);
                        scanf("%d", &qtd_termos);
                    }

                    while (aux <= qtd_termos)
                    {
                        som = som + ((num / den) * sinal);
                        num = num - 3;
                        den = den + 5;
                        cont_sinal++;

                        if (cont_sinal == 3)
                        {
                            sinal = sinal * -1;
                            cont_sinal = 1;
                        }
                        aux++;
                    }
                    printf("\n\nSomatório é igual a: %f", som);

                }
                else // OPÇÃO 4 - FINALIZAÇÃO
                {
                    if (opc == 4)
                    {

                    }
                    else
                    {
                        printf("\n\nFinalizando. . .");
                    }

                }
            }
        }
        printf ("\n\n Pressione qualquer tecla para voltar ao menu. . .");
        getch();
    }

    printf("\n\nAcabou!\n");
    return 0;
}
