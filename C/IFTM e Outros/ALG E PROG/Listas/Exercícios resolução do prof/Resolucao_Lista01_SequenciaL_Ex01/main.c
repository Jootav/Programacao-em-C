/*===============================================================
Lista01_Ex01.alg - Elabore um algoritmo que solicite ao operador as seguintes informações de uma pessoa:  nome, idade, sexo, altura, profissão, rua, bairro, cidade, sigla do estado, CEP.
Mostre no vídeo todos os dados em forma de texto conforme o exemplo abaixo:

		    ==========================================
		    Fulano da Silva, Voce tem 20 anos, sexo masculino
		    com altura de 1.85 mts
		    Sua profissão eh Gerente
		    Mora na Rua: da Saudade, 955
		    Bairro Santa Marta
		    CEP: 38.100-000 - Uberaba (MG)
		    ==========================================



    NOME ALUNO(A):
    CURSO:
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data: 27/08/2024

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
    char nm_pessoa[50], nm_sexo[20], nm_profissao[50];
    char nm_rua[50], nm_bairro[50], nm_cidade[50];
    char nm_sigla[5], nm_cep[20];
    int vl_idade;
    float vl_altura;

    //INICIALIZAR VARIAVEIS
    strcpy(nm_pessoa, ""); //copiar VAZIO para dentro da var
    strcpy(nm_sexo, "");
    strcpy(nm_profissao, "");
    strcpy(nm_rua, "");
    strcpy(nm_bairro, "");
    strcpy(nm_cidade, "");
    strcpy(nm_sigla, "");
    strcpy(nm_cep, "");
    vl_idade = 0;
    vl_altura = 0;

    // receber dados
    printf ("\n digite nome da pessoa ...............: ");
    fflush (stdin); // limpar o buffer de entrada
    gets(nm_pessoa);

    printf ("\n digite sexo (masculino ou feminino) .: ");
    fflush (stdin);
    scanf ("%s", &nm_sexo);

    printf ("\n digie a idade .......................: ");
    fflush (stdin);
    scanf ("%d", &vl_idade);

    printf ("\n Digite altura .......................: ");
    fflush (stdin);
    scanf ("%f", &vl_altura);

    printf ("\n digite nome da profissao ............: ");
    fflush (stdin);
    gets(nm_profissao);

    printf ("\n digite nome da rua e nr da casa .....: ");
    fflush (stdin);
    gets (nm_rua);

    printf ("\n digite nome do bairro ...............: ");
    fflush (stdin);
    gets (nm_bairro);

    printf ("\n digite nome da cidade ...............: ");
    fflush (stdin);
    gets (nm_cidade);

    printf ("\n digite sigla do estado ..............: ");
    fflush (stdin);
    scanf ("%s", &nm_sigla);

    printf ("\n digite cep com separadores ..........: ");
    fflush (stdin);
    gets(nm_cep);

    //mostrar relatorio
    printf ("\n\n\n =============================================");
    printf ("\n %s, voce tem %d anos, sexo %s ", nm_pessoa, vl_idade, nm_sexo);
    printf ("\n com altura de %2.2f metros", vl_altura);
    printf ("\n sua profissao eh %s", nm_profissao);
    printf ("\n mora na rua: %s", nm_rua);
    printf ("\n bairro: %s", nm_bairro);
    printf ("\n cep: %s - %s (%s)", nm_cep, nm_cidade, nm_sigla);
    printf ("\n =============================================");

    //FINALIZAR PROGRAMA
    printf ("\n\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
