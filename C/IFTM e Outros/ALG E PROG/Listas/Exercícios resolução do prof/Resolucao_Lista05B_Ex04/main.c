/*
    Lista05B - Ex04
L05B_ex04 – Elaborar um algoritmo que receba o sexo (“m” para masculino ou “f” para feminino) e altura (maior que
zero) de várias pessoas e finalizar a entrada dos dados quando for digitado “x” para o sexo.
 Ao final da entrada dos dados, mostrar a qual média de altura das mulheres e a média de altura dos
homens.
 Obs.: fazer as VALIDAÇÕES necessárias DURANTE A ENTRADA

    Prof. Ernani Cláudio Borges
    data: 10/09/2024
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
    char nm_sexo;
    float vl_alt, md_masc, md_fem, soma_alt_masc, soma_alt_fem;
    int qtd_masc, qtd_fem;

    //inicializar vars
    nm_sexo = ' ';
    md_masc = md_fem = soma_alt_fem = soma_alt_masc = 0;
    qtd_masc = qtd_fem = vl_alt = 0;

    printf ("\n Digite o PRIMEIRO sexo, sendo: ");
    printf ("\n << m >> para masculino");
    printf ("\n << f >> para feminino");
    printf ("\n << x >> para finalizar entrada ");
    printf ("\n digite opcao ...: ");
    fflush (stdin);
    scanf ("%c", &nm_sexo);
    //validar
    while (nm_sexo != 'm' && nm_sexo != 'M' && nm_sexo != 'f' && nm_sexo != 'F' && nm_sexo != 'x' && nm_sexo != 'X')
    {
        printf ("\n sexo invalido ... digite (m), (f) ou (x) para finalizar ..: ");
        fflush (stdin);
        scanf ("%c", &nm_sexo);
    }//fim validar sexo

    //laço principal para processar todos os dados
    while (nm_sexo != 'x' && nm_sexo != 'X')
    {
        printf ("\n Digite altura da pessoa ...: ");
        fflush (stdin);
        scanf ("%f", &vl_alt);
        //validar
        while (vl_alt <= 0)
        {
            printf ("\n altura invalida ... digite outra ...: ");
            fflush (stdin);
            scanf ("%f", &vl_alt);
        }//fim laço validar altura

        //verificar tipo do sexo
        if (nm_sexo == 'm' || nm_sexo == 'M')
        {
            soma_alt_masc = soma_alt_masc + vl_alt;
            qtd_masc++;
        }
        else
        {
            soma_alt_fem = soma_alt_fem + vl_alt;
            qtd_fem++;
        }

        //proximo sexo
        printf ("\n Digite o PROXIMO sexo, sendo: ");
        printf ("\n << m >> para masculino");
        printf ("\n << f >> para feminino");
        printf ("\n << x >> para finalizar entrada ");
        printf ("\n digite opcao ...: ");
        fflush (stdin);
        scanf ("%c", &nm_sexo);
        //validar
        while (nm_sexo != 'm' && nm_sexo != 'M' && nm_sexo != 'f' && nm_sexo != 'F' && nm_sexo != 'x' && nm_sexo != 'X')
        {
            printf ("\n sexo invalido ... digite (m), (f) ou (x) para finalizar ..: ");
            fflush (stdin);
            scanf ("%c", &nm_sexo);
        }//fim validar sexo

    }//fim do laçoprincipal

    //relatorio
    system ("cls"); //limpar tela
    printf ("\n\n  RELATORIO \n\n");
    if (qtd_masc == 0 && qtd_fem == 0)
    {
        printf ("\n Nao houve entrada de dados.");
    }
    else
    {
        if (qtd_fem > 0)
        {
            md_fem = soma_alt_fem / qtd_fem;
            printf ("\n Media da altura feminina = %.2f metros", md_fem);
        }
        else
        {
            printf ("\n nao houve entrada de pessoas do sexo feminino");
        }
        if (qtd_masc > 0)
        {
            md_masc = soma_alt_masc / qtd_masc;
            printf ("\n Media da altura masculino = %.2f metros", md_masc);
        }
        else
        {
            printf ("\n nao houve entrada de pessoas do sexo masculino");
        }
    }

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
