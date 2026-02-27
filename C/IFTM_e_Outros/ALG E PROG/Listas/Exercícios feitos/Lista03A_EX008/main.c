/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:

*/
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

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
    //CRIAR VARIAVEIS
    char nm_func[50];
    float nr_horastrab, sal_bruto, desc_inss, desc_ir, sal_total;
    int nr_depen;

    //INICIALIZAR VARIAVEIS
    strcpy(nm_func, "");
    nr_horastrab = sal_bruto = desc_inss = desc_ir = sal_total = 0;
    nr_depen = 0;

    printf("Insira o nome do funcionario.........: ");
    fflush(stdin);
    gets(nm_func);

    if (strcmp(nm_func, "") == 0)
    {
        printf("Nome vazio. Insira nome valido.");
    }
    else
    {
        printf("Insira o numero de horas trabalhadas.: ");
        fflush (stdin);
        scanf("%f", &nr_horastrab);

        if (nr_horastrab <= 0)
        {
            printf("Nao teve horas trabalhadas.");
        }
        else
        {
            printf("Insira o numero de dependentes.......: ");
            fflush(stdin);
            scanf("%d", &nr_depen);

            //calculos

            sal_bruto = nr_horastrab * 12 + nr_depen * 40;
            desc_inss = sal_bruto * 8.5 / 100.0;
            desc_ir = sal_bruto * 5.0 / 100.0;
            sal_total = sal_bruto - desc_inss - desc_ir;

            printf("\n Nome do funcionario...........: %s", nm_func);
            printf("\n Numero de horas trabalhadas...: %2.2f", nr_horastrab);
            printf("\n Numero de dependentes.........: %d", nr_depen);
            printf("\n Salario bruto do funcionario..: %2.2f", sal_bruto);
            printf("\n Valor descontado do INSS......: %2.2f", desc_inss);
            printf("\n Valor descontado do IR........: %2.2f", desc_ir);
            printf("\n Salario liquido do funcionario: %2.2f", sal_total);
        }
    }






    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
