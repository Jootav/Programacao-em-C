/*
    Lista07B - Menu

    Prof. Ernani Cláudio Borges
    data: 24/09/2024
==============================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>

//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    int opc, x;

    //vars da opcao 1
    int n, cont, soma, limite, qtd_perfeito;

    //vars da opcao 2
    float vl_vidro;
    float vl_pago, vl_total_orcamentos, vl_maior, vl_menor;
    int qtd_orcamentos, vl_larg, vl_comp, vl_larg_ajus, vl_comp_ajus;

    //vars da opcap 3
    float s, num, den;
    int sinal, cont_sinal, qtd_termos;

    //vars da opcao 4
    int res, ok;
    char resp;

    //inicializar vars
    opc = x = 0;

    //laço principal do menu
    while (opc != 5)
    {
        //criar menu
        system ("cls");
        printf ("\n\n      MENU     \n");
        printf ("\n 1) Numero Perfeito");
        printf ("\n 2) Orcamento de vidracaria");
        printf ("\n 3) Sequencia com variacao dupla de sinal");
        printf ("\n 4) Numeros divisiveis por 4");
        printf ("\n 5) Finalizar programa");
        printf ("\n\n Informe uma das opcoes (1,2,3,4 ou 5) ..: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 5)
        {
            printf ("\n opcao invalida ... digite 1, 2, 3, 4 ou 5 ...: ");
            fflush (stdin);
            scanf ("%d", &opc);
        }//fim laço validar opcao

        //verificar qual opcao
        if (opc == 5)
            printf ("\n\n Finalizando ...");
        else
        {
            if (opc == 1)
            {
                //inicializar
                n = 2;
                qtd_perfeito = soma = limite = 0;
                cont = 1;

                printf ("\n\n opcao 1 - Numero Perfeito");
                printf ("\n Digite numero limite maior que 2 ..: ");
                fflush (stdin);
                scanf ("%d", &limite);
                //validar
                while (limite <= 2)
                {
                    printf ("\n numero limite invalido ... digite outro ...: ");
                    fflush (stdin);
                    scanf ("%d", &limite);
                }//fim validar limite

                while (n <= limite)
                {
                    while (cont < n)
                    {
                        if (n % cont == 0)
                            soma = soma + cont;

                        cont++;
                    }
                    if (n == soma)
                    {
                        printf ("\n %d eh perfeito", n);
                        qtd_perfeito++;
                    }
                    n++;
                    cont = 1;
                    soma = 0;
                }//fim laço calculos perfeitos
            }
            else
            {
                if (opc == 2)
                {
                    //inicializar vars
                    vl_vidro = vl_larg = vl_comp = vl_larg_ajus = vl_comp_ajus = 0;
                    vl_pago = vl_total_orcamentos = vl_maior = vl_menor = 0;
                    qtd_orcamentos = 0;

                    printf ("\n\n opcao 2 - Orcamento de Vidracaria");

                    printf ("\n Digite valor do PRIMEIRO vidro ou 0 (zero) para finalizar ..: ");
                    fflush (stdin);
                    scanf ("%f", &vl_vidro);
                    //validar
                    while (vl_vidro < 0)
                    {
                        printf ("\n valor vidro invalido ... digite outro ou 0 (zero) para fim ..: ");
                        fflush (stdin);
                        scanf ("%f", &vl_vidro);
                    }//validar vidro

                    //laço principal para varios orcamentos
                    while (vl_vidro != 0)
                    {
                        //acumular total de orcamentos
                        qtd_orcamentos++;

                        //receber largura
                        printf ("\n digite largura do vidro (em mm) .......: ");
                        fflush (stdin);
                        scanf ("%d", &vl_larg);
                        //validar
                        while (vl_larg <= 0)
                        {
                            printf ("\n largura invalida ... digite outra ..: ");
                            fflush (stdin);
                            scanf ("%d", &vl_larg);
                        }//fim validar largura

                        //receber comprimento
                        printf ("\n digite comprimento do vidro (em mm) ...: ");
                        fflush (stdin);
                        scanf ("%d", &vl_comp);
                        //validar
                        while (vl_comp <= 0)
                        {
                            printf ("\n comprimento invalido ... digite outro ..: ");
                            fflush (stdin);
                            scanf ("%d", &vl_comp);
                        }//fim validar largura

                        //ajustar largura
                        vl_larg_ajus = vl_larg;
                        while (vl_larg_ajus % 5 != 0)
                            vl_larg_ajus++;

                        //ajustar comprimento
                        vl_comp_ajus = vl_comp;
                        while (vl_comp_ajus % 5 != 0)
                            vl_comp_ajus++;

                        //valor a pagar
                        vl_pago = vl_vidro * vl_larg_ajus * vl_comp_ajus;

                        //mostra valor do orcamento
                        printf ("\n\n valor orcamento %d = R$ %.2f", qtd_orcamentos, vl_pago);

                        //acumular soma de todos orcamentos
                        vl_total_orcamentos = vl_total_orcamentos + vl_pago;

                        //verificar se eh o primeiro orcamento
                        if (qtd_orcamentos == 1)
                        {
                            vl_maior = vl_pago;
                            vl_menor = vl_pago;
                        }

                        //verificar qual o maior
                        if (vl_pago > vl_maior)
                            vl_maior = vl_pago;

                        //verificar quel o menor
                        if (vl_pago < vl_menor)
                            vl_menor = vl_pago;

                        //proximo valor de vidro ou finalizar
                        printf ("\n Digite valor do PROXIMO vidro ou 0 (zero) para finalizar ..: ");
                        fflush (stdin);
                        scanf ("%f", &vl_vidro);
                        //validar
                        while (vl_vidro < 0)
                        {
                            printf ("\n valor vidro invalido ... digite outro ou 0 (zero) para fim ..: ");
                            fflush (stdin);
                            scanf ("%f", &vl_vidro);
                        }//validar vidro
                    }//fim laço principal dos varios orcamentos
                    printf ("\n\n    Relatorio \n");
                    if (qtd_orcamentos == 0)
                        printf ("\n\n Nao houve orcamentos neste dia.");
                    else
                    {
                        printf ("\n total de orcamentos ............: %d", qtd_orcamentos);
                        printf ("\n valor total dos orcamentos .....: %.2f", vl_total_orcamentos);
                        printf ("\n Maior valor de orcamento .......: %.2f", vl_maior);
                        printf ("\n Menor valor de orcamento .......: %.2f", vl_menor);
                    }//fimse relatorio
                }
                else
                {
                    if (opc == 3)
                    {
                        //inicializar vars
                        s = 0;
                        num = 1000;
                        den = 5;
                        sinal = cont_sinal = 1;
                        qtd_termos = 0;

                        printf ("\n\n opcao 3 - Sequencia com variacao dupla de sinal");
                        printf ("\n\n digite quantos termos deseja calcular ..: ");
                        fflush (stdin);
                        scanf ("%d", &qtd_termos);
                        //validar
                        while (qtd_termos <= 0)
                        {
                            printf ("\n quantidade invalida ... digite outro ...: ");
                            fflush (stdin);
                            scanf ("%d", &qtd_termos);
                        }//fim validar qtd_termos

                        //laço para calculo dos termos
                        while (qtd_termos >= 1)
                        {
                            //acumular somatorio
                            s = s + ((num / den) * sinal);

                            //passar para proximo termo
                            num = num - 3;
                            den = den + 5;
                            cont_sinal++;
                            //verificar se chegou no terceiro termo
                            if (cont_sinal == 3)
                            {
                                sinal = sinal * -1;
                                cont_sinal = 1;
                            }
                            qtd_termos--;
                        }//fim laço calculo dos termos
                        printf ("\n\n Somatorio = %f", s);
                    }
                    else
                    {
                        //inicializar vars
                        resp = 's';
                        //laço para voltar e executar novamente
                        while (resp == 's' || resp == 'S')
                        {
                            //rei-iniciar vars para executar novamente
                            n = 1;
                            limite = ok = 0;
                            system ("cls");

                            printf ("\n\n opcao 4 - Numeros divisiveis por 4");

                            printf ("\n Digite numero limite maior que 2 ..: ");
                            fflush (stdin);
                            scanf ("%d", &limite);
                            //validar
                            while (limite <= 2)
                            {
                                printf ("\n numero limite invalido ... digite outro ...: ");
                                fflush (stdin);
                                scanf ("%d", &limite);
                            }//fim validar limite
                            printf ("\n\n");
                            while (n <= limite)
                            {
                                if (n % 4 == 0)
                                {
                                    printf ("%6d", n);
                                    ok++;
                                }
                                n++;
                            }
                            if (ok == 0)
                                printf ("\n\n nao houve divisor por 4 neste intervalo.");


                            printf ("\n\n Deseja executar novamente << s >> ou << n >> ..: ");
                            fflush (stdin);
                            scanf ("%c", &resp);
                            //validar
                            while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N')
                            {
                                printf ("\n resposta invalida ... digite (s) ou (n) ..: ");
                                fflush(stdin);
                                scanf ("%c", &resp);
                            }
                        }
                    }//fimse opcao 4 e 3
                }//fimse opcao 2
            }//fimse opcao 1
            printf ("\n\n pressione \"ESC\" para voltar ao menu \n");
            x = getch();
            //validar
            while (x != 27)
            {
                printf ("\n tecla invalida ... pressione \"ESC\" ...");
                x = getch();
            }//fim laço validar tecla
        }//fim da opcao 3
    }//fim laço principal do menu

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
