/*===============================================================
Lista01_Ex07.alg - Elabore um algoritmo que receba o
nome de duas pessoas e mostre no vídeo a união
(concatenação) destes dois nomes.
Ex.: nome1 <-- "MARIA"
	 nome2 <-- "JOÃO"
resultado (mostrar) :   MARIA    e     JOÃO



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
    char nm_pessoa1[50], nm_pessoa2[50], nm_uniao[100];

    //INICIALIZAR VARIAVEIS
    strcpy(nm_pessoa1, ""); //vazio
    strcpy(nm_pessoa2, ""); //vazio
    strcpy(nm_uniao, ""); //vazio

    //receber dados
    printf ("\n digite nome da primeira pessoa ...: ");
    fflush (stdin);
    gets(nm_pessoa1);

    printf ("\n digite nome da  segunda pessoa ...: ");
    fflush (stdin);
    gets (nm_pessoa2);

    //unir (concatenar)
    strcat(nm_uniao, nm_pessoa1);
    strcat(nm_uniao, " e ");
    strcat(nm_uniao, nm_pessoa2);

    //relatorio
    printf ("\n\n nome 1 .........: %s ", nm_pessoa1);
    printf ("\n nome 2 .........: %s ", nm_pessoa2);
    printf ("\n concatenacao ...: %s ", nm_uniao);

    //FINALIZAR PROGRAMA
    printf ("\n\n\n\n Tchau ... obrigado ... \n\n\n");

    return 0;
}
