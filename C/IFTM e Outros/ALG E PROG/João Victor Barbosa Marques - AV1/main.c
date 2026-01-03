/*

    João Victor Barbosa Marques - Eng. Comp - 10150037619 - 30/09/2024

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>

int main()
{
    //VARIAVEIS
    int opc;

    //INICIALIZAR AS VARIAVEIS
    opc = 0;

    //VARIAVEIS EX 1
    float val_consumo, val_conta, maior_conta, menor_conta, qtd_contas, qtd_contas_0;
    float pc_f1, pc_f2, pc_f3, pc_f4, pc_f5, soma_consumo, media_consumo;

    int faixa1, faixa2, faixa3, faixa4, faixa5;

    //VARIAVEIS EX 2
    int aux, base, expo, num_final;
    int cont, sinal, cont_sinal;
    float num, fat, den, fracao, soma_total;

    //MENU LAÇO PRINCIPAL
    while (opc != 3)
    {
        system("cls");
        printf("\n-----MENU-----");
        printf("\n1 - Calculo varias contas de energia eletrica residencial");
        printf("\n2 - Sequencia com variacao triplice de sinal");
        printf("\n3 - Finalizar algoritmo");
        printf("\n\nInforme uma das opcoes (1, 2 ou 3): ");
        scanf("%d", &opc);

        while (opc < 1 || opc > 3)
        {
            printf("\nDigite uma opcao valida. . . (1, 2 ou 3): ");
            scanf("%d", &opc);
        }

        if (opc == 3) // OPCAO 3 - FINALIZAR
        {
            printf("\nFinalizando. . .\n");
        }
        else
        {
            if (opc == 1) // OPCAO 1 - CONTAS DE ENERGIA ELETRICA
            {
                val_consumo = val_conta = maior_conta = menor_conta = qtd_contas = qtd_contas_0 = 0;
                pc_f1 = pc_f2 = pc_f3 = pc_f4 = pc_f5 = soma_consumo = media_consumo = 0;
                faixa1 = faixa2 = faixa3 = faixa4 = faixa5 = 0;

                printf("\nInsira seu primeiro consumo de energia (maior ou igual a zero) ou -1 para finalizar: ");
                fflush(stdin);
                scanf("%f", &val_consumo);

                while (val_consumo < -1) // SE O CONSUMO FOR MENOR QUE ZERO, VALIDAR
                {
                    printf("\nConsumo invalido. Insira consumo de energia valido (maior ou igual a zero) ou -1 para finalizar: ");
                    fflush(stdin);
                    scanf("%f", &val_consumo);
                }

                while (val_consumo != -1) // SE VALOR CONSUMO FOR DIFERENTE DE -1, REFAÇE O PROCESSO
                {

                    soma_consumo = soma_consumo + val_consumo;


                    if (val_consumo == 0) // SE O CONSUMO FOR IGUAL A ZERO
                    {
                        qtd_contas_0++;
                    }
                    else
                    {
                        qtd_contas++;
                        if (val_consumo >= 1 && val_consumo <= 30) // VALOR CONSUMO MAIOR QUE 1 E MENOR QUE 30
                        {
                            faixa1++;
                            val_conta = (val_consumo * 1.30);
                        }
                        else
                        {
                            if (val_consumo >= 30,01 && val_consumo <= 70) // VALOR CONSUMO MAIOR QUE 30,01 E MENOR QUE 70
                            {
                                faixa2++;
                                val_conta = (30 * 1.30) + ((val_consumo - 30) * 1.90);
                            }
                            else
                            {
                                if (val_consumo >= 70,01 && val_consumo <= 90) // VALOR CONSUMO MAIOR QUE 70,01 E MENOR QUE 90
                                {
                                    faixa3++;
                                    val_conta = (30 * 1.30) + (40 * 1.90) + ((val_consumo - 70) * 2.40);
                                }
                                else
                                {
                                    if (val_consumo >= 90,01 && val_consumo <= 120) // VALOR CONSUMO MAIOR QUE 90,01 E MENOR QUE 120
                                    {
                                        faixa4++;
                                        val_conta = (30 * 1.30) + (40 * 1.90) + (20 * 2.40) + ((val_consumo - 90) * 3.10);
                                    }
                                    else // VALOR CONSUMO MAIOR QUE 120
                                    {
                                        faixa5++;
                                        val_conta = (30 * 1.30) + (40 * 1.90) + (20 * 2.40) + (30 * 3.10) + ((val_consumo - 120) * 3.80);
                                    }
                                }
                            }
                        }
                    }

                    if (qtd_contas == 1) // SE FOR A PRIMEIRA CONTA
                    {
                        maior_conta = val_conta;
                        menor_conta = val_conta;
                    }
                    else
                    {
                        if (val_conta >= maior_conta)
                        {
                            maior_conta = val_conta;
                        }
                        else
                        {
                            if (val_conta <= menor_conta)
                            {
                                menor_conta = val_conta;
                            }
                        }
                    }

                    printf("\nInsira seu outro consumo de energia (maior ou igual a zero) ou -1 para finalizar: ");
                    fflush(stdin);
                    scanf("%f", &val_consumo);

                } // LAÇO EX 1

                if (qtd_contas == 0)
                {
                    printf("\nNenhum consumo foi calculado.");
                }
                else
                {
                    printf("\n=============Relatorio final=============");
                    printf("\nQuantidade de contas maior que zero.: %.0f", qtd_contas);
                    printf("\nQuantidade de contas com consumo 0..: %.0f", qtd_contas_0);
                    printf("\nMaior valor de conta a pagar........: %.2f", maior_conta);
                    printf("\nMenor valor de conta a pagar........: %.2f", menor_conta);

                    pc_f1 = faixa1 / qtd_contas * 100;
                    printf("\nPercentual de contas na faixa 1.....: %.2f", pc_f1);
                    pc_f2 = faixa2 / qtd_contas * 100;
                    printf("\nPercentual de contas na faixa 2.....: %.2f", pc_f2);
                    pc_f3 = faixa3 / qtd_contas * 100;
                    printf("\nPercentual de contas na faixa 3.....: %.2f", pc_f3);
                    pc_f4 = faixa4 / qtd_contas * 100;
                    printf("\nPercentual de contas na faixa 4.....: %.2f", pc_f4);
                    pc_f5 = faixa5 / qtd_contas * 100;
                    printf("\nPercentual de contas na faixa 5.....: %.2f", pc_f5);

                    media_consumo = soma_consumo / qtd_contas;
                    printf("\nMedia de consumo do bairro..........: %.2f", media_consumo);

                    printf("\n\nPressione qualquer tecla para voltar para o menu. ");
                    getch();

                }
            }
            else // OPCAO 2 - SEQUENCIA COM VARIACAO TRIPLICE
            {
                soma_total = 0;
                num = den = fat = expo = 1;
                base = 1;
                sinal = cont = 1;
                cont_sinal = 0;

                printf("\nInsira um numerador final para realizar a soma (maior que zero): ");
                fflush(stdin);
                scanf("%d", &num_final);

                while (num_final < 0)
                {
                    printf("\nInsira um numerador final valido para realizar a soma (maior que zero): ");
                    fflush(stdin);
                    scanf("%d", &num_final);
                }

                while (den <= num_final)
                {
                    //CALCULO EXPOENTE
                    num = 1;
                    fat = 1;
                    cont = 1;

                    while (cont <= expo)
                    {
                        num = num * base;
                        cont++;
                    }

                    //CALCULO FATORIAL
                    cont = 1;
                    while (cont <= den)
                    {
                        fat = fat * cont;
                        cont++;
                    }

                    fracao = (num / fat) * sinal;
                    soma_total = soma_total + fracao;

                    expo = expo + 2;
                    base = base + 2;
                    den = den + 1;
                    cont_sinal++;

                    if (cont_sinal == 3)
                    {
                        sinal = sinal * -1;
                        cont_sinal = 1;
                    }
                }

                printf("\nA soma da sequencia e: %.2f", soma_total);
                printf("\nPressione qualquer tecla para voltar para o menu. ", soma_total);
                getch();

            }
        }
    }
}
