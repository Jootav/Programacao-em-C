/*===============================================================
Lista01_Ex10.alg - Receber os seguintes dados de um funcionário:
nome, idade, cargo e o seu salário bruto. Considere:
a)	o salário bruto teve um reajuste de 20%;
b)	o salário bruto total  (salário bruto + 20%) é descontado 15% para se obter o salário líquido.
Elabore um algoritmo que solicite os dados do funcionário processe e mostre no vídeo:
•	o nome, a idade e o cargo;
•	o salário bruto total;
•	o salário líquido



    NOME ALUNO(A):
    CURSO:
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
#define tam2 5

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS
    char nm_func[50], nm_cargo[50];
    int vl_idade, x;
    float vl_sal_bruto, vl_reajuste, vl_sal_bruto_total;
    float vl_desconto, vl_sal_liquido;

    //INICIALIZAR VARIAVEIS
    strcpy(nm_func, "");
    strcpy(nm_cargo, "");
    vl_idade = vl_sal_bruto = vl_reajuste = vl_sal_bruto_total = 0;
    vl_desconto = vl_sal_liquido = 0;
    x = 0;

    //receber dados
    printf ("\n Digite nome do funcionario (nao pode ser vazio) ..: ");
    fflush (stdin);
    gets(nm_func);
    //verificar
    x = strcmp(nm_func, "");
    if (x == 0)
    {
        printf ("\n\n voce teclou ENTER sem ter digitado nome ... invalido ...");
    }
    else
    {
        printf ("\n digite idade (maior que zero) ...: ");
        fflush (stdin);
        scanf ("%d", &vl_idade);
        //verificar
        if (vl_idade <= 0)
        {
            printf ("\n\n idade negativa ou zero ... invalido para calculo ...");
        }
        else
        {
            printf ("\n digite nome do cargo ...: ");
            fflush (stdin);
            gets(nm_cargo);
            //verificar
            if ( strcmp(nm_cargo, "") == 0  )
            {
                printf ("\n\n voce teclou ENTER sem ter digitado cargo ... invalido ...");
            }
            else
            {
                printf ("\n digite valor salario bruto (maior que zero) ...: ");
                fflush (stdin);
                scanf ("%f", &vl_sal_bruto);
                //verificar
                if (vl_sal_bruto <= 0)
                {
                    printf ("\n\n salario negativo ou zero ... invalido ... ");
                }
                else
                {
                    //todas as entradas sao validas para calculo
                    //calculos
                    vl_reajuste = vl_sal_bruto * 20.0 / 100.0;
                    vl_sal_bruto_total = vl_sal_bruto + vl_reajuste;
                    vl_desconto = vl_sal_bruto_total * 15.0 / 100.0;
                    vl_sal_liquido = vl_sal_bruto_total - vl_desconto;

                    //relatorio
                    printf ("\n\n        RELATORIO \n");
                    printf ("\n nome do funcionario ...................: %s", nm_func);
                    printf ("\n idade .................................: %d anos", vl_idade);
                    printf ("\n cargo .................................: %s", nm_cargo);
                    printf ("\n\n valor do salario bruto ................ R$ %8.2f", vl_sal_bruto);
                    printf ("\n valor reajuste de 20%% ................. R$ %8.2f", vl_reajuste);
                    printf ("\n valor do salario bruto total .......... R$ %8.2f", vl_sal_bruto_total);
                    printf ("\n valor do desconto de 15%% .............. R$ %8.2f", vl_desconto);
                    printf ("\n valor do salario liquido .............. R$ %8.2f", vl_sal_liquido);
                }//fimse do salario bruto
            }//fimse cargo
        }//fimse da idade
    }//fimse de x == 0

    //FINALIZAR PROGRAMA
    printf ("\n\n\n\n Tchau ... obrigado ... \n\n\n");

    return 0;
}
