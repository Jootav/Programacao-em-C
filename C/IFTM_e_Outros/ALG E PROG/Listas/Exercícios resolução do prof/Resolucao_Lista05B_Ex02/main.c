/*

    L05B_ex02 – A conversão de graus Fahrenheit para Célcius é obtida pela fórmula:
C = 5.0 / 9.0 * (F – 32)
	Elabore um algoritmo que calcule e escreva no vídeo o número de graus Fahrenheit e seu respectivo graus Célcius, variando  de 1 em 1 a partir de 32 para o valor de Fahrenheit até chegar a na quantidade de conversões que o cliente deseja.

	Obs.: fazer de forma que o usuário possa “voltar” e executar com outro quantitativo, respondendo << s >> sim, e ou << n >> para não
			Fazer todas as validações de entradas.


    Prof. Ernani Cláudio Borges
    data:
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
    float f_limite, vl_f, vl_c;
    char resp;

    //inicializar vars
    resp = 's';
    //laço principal para voltar e executar novamente
    while (resp == 's' || resp == 'S')
    {
        //inicializar vars
        vl_c = f_limite = 0;
        vl_f = 32;

        system ("cls"); //limpar tela
        printf ("\n\n Digite limite farenheir (maior ou igual a 32) ..: ");
        fflush (stdin);
        scanf ("%f", &f_limite);
        //validar
        while (f_limite < 32)
        {
            printf ("\n invalido ... digite outro maior ou igual a 32 ..: ");
            fflush (stdin);
            scanf ("%f", &f_limite);
        }//fim laço validar

        //mostrar conversoes
        printf ("\n\n conversoes: \n\n");
        while (vl_f <= f_limite)
        {
            vl_c = 5.0 / 9.0 * (vl_f - 32);
            printf ("\n %.2f farenheit = %.2f celcius", vl_f, vl_c);
            //passar para proxima temperatua
            vl_f++;
            Sleep(100);
        }//fim laço das conversoes

        //perguntar se deseja voltar
        printf ("\n\n deseja voltar e executar com outro limite:");
        printf ("\n << s >> para sim \n << n >> para nao \n digite opcao ..: ");
        fflush (stdin);
        scanf ("%c", &resp);
        //validar
        while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N')
        {
            printf ("\n resposta invalida ... digite << s >> ou << n >> .: ");
            fflush (stdin);
            scanf ("%c", &resp);
        }//fim laço validar resposta.

    }//fim laço princial

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
