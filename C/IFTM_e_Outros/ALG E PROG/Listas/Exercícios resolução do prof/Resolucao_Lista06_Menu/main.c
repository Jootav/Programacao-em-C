/*
    Lista06 - Menu

    Prof. Ernani Cláudio Borges
    data: 23/09/2024

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
//============    DECLARAR PROTOTIPOS ==========================
//==============================================================





//==============================================================
//============    CRIAR OS MÓDULOS DE FUNÇÕES ==================
//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================



//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    int opc, x;
    int aux, qtd1, qtd2, qtd3, qtd4 ;
    float n, pc2, media, qtd_total, soma;

    int qtd_par, qtd_impar, maior_n, menor_n, maior_par, menor_impar;
    float pc_par, pc_impar;

    //inicializar vars
    opc = x = 0;

    //laço principal do menu
    while (opc != 4)
    {
        //inicializar vars gerais
        n = qtd_total = media = soma = 0;

        //montar o menu
        system ("cls");
        printf ("\n\n             MENU PRINCIPAL \n\n");
        printf ("\n 1) Estatistica com intervalo de numeros ");
        printf ("\n 2) Estatistica com varios numeros");
        printf ("\n 3) Calculo Fatorial de um numero");
        printf ("\n 4) finalizar programa");
        printf ("\n\n Informe nr de uma das opcoes (1,2,3 ou 4) ..: ");
        fflush (stdin);
        scanf ("%d", &opc);
        //validar
        while (opc < 1 || opc > 4)
        {
            printf ("\n opcao invalida ... digite 1, 2, 3 ou 4 ...: ");
            fflush (stdin);
            scanf ("%d", &opc);
        }//fim laço validar opcao

        //verificar qual opção
        if (opc == 4)
            printf ("\n\n finalizando ... ");
        else
        {
            if (opc == 1)
            {
                //inicializar vars somente da opcao1
                n = qtd1 = qtd2 = qtd3 = qtd4 = pc2 = 0;

                printf ("\n\n opcao 1 - Estatistica com intervalo de numeros ");
                printf ("\n Digite primeiro numero (inteiro) entre 0 e 100 ou -1 para finalizar entrada ..: ");
                fflush (stdin);
                scanf ("%f", &n);
                aux = n;
                //validar
                while (n < -1 || n > 100 || n != aux)
                {
                    if (n < - 1 || n > 100)
                        printf ("\n numero invalido ... ");
                    else
                        if (n != aux)
                            printf ("\n numero possui casas decimal ... invalido para calculo");

                    printf ("\n digite outro inteiro e no intervalo de 0 a 100 ou -1 para fim ..: ");
                    fflush (stdin);
                    scanf ("%f", &n);
                    aux = n;
                }//fim validar n

                //laço principal para processar varios numeros
                while (n != -1)
                {
                    //acumular qtd_total
                    qtd_total++;

                    //verificar intervalos
                    if (n <= 25)
                        qtd1++;
                    else
                        if (n <= 50)
                            qtd2++;
                        else
                            if (n <= 75)
                            {
                                qtd3++;
                                soma = soma + n;
                            }
                            else
                                qtd4++;

                    printf ("\n Digite proximo numero inteiro entre 0 e 100 ou -1 para finalizar entrada ..: ");
                    fflush (stdin);
                    scanf ("%f", &n);
                    aux = n;
                    //validar
                    while (n < -1 || n > 100 || n != aux)
                    {
                        if (n < - 1 || n > 100)
                            printf ("\n numero invalido ... ");
                        else if (n != aux)
                            printf ("\n numero possui casas decimal ... invalido para calculo");

                        printf ("\n digite outro inteiro e no intervalo de 0 a 100 ou -1 para fim ..: ");
                        fflush (stdin);
                        scanf ("%f", &n);
                        aux = n;
                    }//fim validar n
                }//fim laço principal dos varios numeros

                //verificar se houve entrada
                if (qtd_total == 0)
                    printf ("\n\n nao houve entrada de dados.");
                else
                {
                    printf ("\n\n total de numeros informados .....: %.0f", qtd_total);
                    printf ("\n total numeros do intervalo 1 ....: %d", qtd1);
                    if (qtd2 == 0)
                        printf ("\n nao houve numeros no intervalo 2 ");
                    else
                    {
                        pc2 = qtd2 / qtd_total * 100;
                        printf ("\n total numeros do intervalo 2 ....: %d", qtd2);
                        printf ("\n percentual nrs do intervalo 2 ...: %.1f%%", pc2);
                    }
                    if (qtd3 == 0)
                        printf ("\n nao houve numeros no intervalo 3 ");
                    else
                    {
                        media = soma / qtd3;
                        printf ("\n total numeros do intervalo 3 ....: %d", qtd3);
                        printf ("\n media dos numeros intervalo 3 ...: %.1f", media);
                    }
                    printf ("\n total numeros do intervalo 4 ....: %d", qtd4);
                }//fim se relatorio final opcao 1
            //=============================================
            }
            else
            {
                if (opc == 2)
                {
                    //inicializar var opcao 2
                    qtd_par = qtd_impar = maior_n = menor_n = maior_par = menor_impar = 0;
                    pc_par = pc_impar = 0;

                    printf ("\n\n opcao 2 - Estatistica com varios numeros");
                    printf ("\n Digite primeiro numero inteiro e positivo ou 0 (zero) para fim ..: ");
                    fflush (stdin);
                    scanf ("%f", &n);
                    aux = n;
                    //validar
                    while (n < 0 || n != aux)
                    {
                        if (n < 0)
                            printf ("\n numero negativo invalido ... ");
                        else
                            if (n != aux)
                                printf ("\n numero possui casas decimal ... invalido para calculo");

                        printf ("\n digite outro numero inteiro e positivo ou 0 para fim ..: ");
                        fflush (stdin);
                        scanf ("%f", &n);
                        aux = n;
                    }//fim validar n

                    //laço principal para processar varios numeros
                    while (n != 0)
                    {
                        //acumular total de numeros
                        qtd_total++;

                        //somar os numeros
                        soma = soma + n;

                        //verificar se eh par ou impar
                        aux = n;
                        if (aux % 2 == 0)
                        {
                            qtd_par++;
                            //verificar se eh o primeiro par
                            if (qtd_par == 1)
                                maior_par = n;

                            //verificar se eh o maior par
                            if (n > maior_par)
                                maior_par = n;
                        }
                        else
                        {
                            qtd_impar++;
                            //verificar se eh o primeiro impar
                            if (qtd_impar == 1)
                                menor_impar = n;

                            //verificar se eh o menor impar
                            if (n < menor_impar)
                                menor_impar = n;
                        }

                        //verificar se eho primeiro elemento
                        if (qtd_total == 1)
                        {
                            maior_n = n;
                            menor_n = n;
                        }

                        //verificar se eh o maior
                        if (n > maior_n)
                            maior_n = n;

                        //verificar se eh o menor
                        if (n < menor_n)
                            menor_n = n;

                        printf ("\n Digite proximo numero inteiro e positivo ou 0 (zero) para fim ..: ");
                        fflush (stdin);
                        scanf ("%f", &n);
                        aux = n;
                        //validar
                        while (n < 0 || n != aux)
                        {
                            if (n < 0)
                                printf ("\n numero invalido ...  ");
                            else
                                if (n != aux)
                                    printf ("\n numero possui casas decimal ... invalido para calculo");

                            printf ("\n digite outro inteiro e positivo ou 0 para fim ..: ");
                            fflush (stdin);
                            scanf ("%f", &n);
                            aux = n;
                        }//fim validar n
                    }//fim laço principal

                    printf ("\n\n     RELATORIO FINAL \n\n");
                    //verificar se houve entrada de dados
                    if (qtd_total == 0)
                        printf ("\n nao houve entrada de dados.");
                    else
                    {
                        printf ("\n a) O valor da soma de todos esses numeros informados ..: %.0f", soma);
                        media = soma / qtd_total;
                        printf ("\n b) o valor da media aritmetica entre todos os numeros .: %.1f", media);
                        printf ("\n c) a quantidade de numeros informados .................: %.0f", qtd_total);
                        if (qtd_impar > 0)
                        {
                            printf ("\n e) a quantidade de numeros impares ....................: %d", qtd_impar);
                            printf ("\n i) o menor numero impar ...............................: %d", menor_impar);
                            pc_impar = qtd_impar / qtd_total * 100;
                            printf ("\n f) percentual impares (em relacao ao total de numeros) : %.1f%%", pc_impar);
                        }
                        else
                            printf ("\n nao houve entrada de numeros impares ");

                        if (qtd_par > 0)
                        {
                            printf ("\n d) a quantidade de numeros pares ......................: %d", qtd_par);
                            pc_par = qtd_par / qtd_total * 100;
                            printf ("\n f) percentual de pares (em relacao ao total de numeros): %.1f%%", pc_par);
                            printf ("\n h) o maior numero par .................................: %d", maior_par);
                        }
                        else
                            printf ("\n nao houve entrada de numeros pares ");

                        printf ("\n g) o maior numero = %d, e menor numero = %d", maior_n, menor_n);

                    }//fim relatorio
                }//=========================================================
                else
                {
                    printf ("\n\n opcao 3 - Calculo Fatorial de um numero");
                    printf ("\n\n Informe numero positivo (maior que zero) ..: ");
                    fflush (stdin);
                    scanf ("%f", &n);
                    //validar
                    while (n < 0)
                    {
                        printf ("\n numero negativo ... invalido ... digite outro ..: ");
                        fflush (stdin);
                        scanf ("%f", &n);
                    }//fim laço validar n fatorial

                    //calculo do fatorial
                    qtd_total = 1;
                    soma = 1;
                    while (qtd_total <= n)
                    {
                        soma = soma * qtd_total;
                        qtd_total++;
                    }
                    printf ("\n\n Fatorial de %.0f! = %.0f ", n, soma);

                }//fim se opcao 2 e 3
            }//fimse opcao 1
            printf ("\n\n Pressione \"ESC\" para voltar ao menu principal");
            x = getch();
            while (x != 27)
            {
                printf ("\n tecla invalida ... pressione \"ESC\" ...");
                x = getch();
            }//fim laço validar tecla.
        }
    }//fim do laço do menu

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
