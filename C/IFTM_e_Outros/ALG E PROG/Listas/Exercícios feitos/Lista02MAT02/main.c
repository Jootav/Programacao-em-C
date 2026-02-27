#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define tam1 4 // A MATRIZ TEM 4 LINHAS, MAS APENAS 3 VAO SER USADAS, ENQUANTO A ULTIMA ARMAZENA OS MENORES VALORES
#define tam2 3

//

//

//

//

//

void entrada_nomes(char mat_nm[][50], int tamanho)
{
    int i,j;
    i=j=0;
    while(i<tamanho)
    {
        printf("\n Digite o nome: ");
        fflush(stdin);
        gets(mat_nm[i]);
        while(strcmp(mat_nm[i], "") == 0)
        {
            printf("\n Nome vazio... Insira outro: ");
            gets(mat_nm[i]);
        }
        i++;
    }
}

//

int main()
{
    char nm_papelarias[tam1-1][50], nm_material[tam2][50];
    int mat_precos[tam1][tam2], i, j;

    //INICIALIZAR
    for(i=0; i<tam1-1; i++)
        strcpy(nm_papelarias[i], "");

    for(i=0; i<tam1; i++)
        strcpy(nm_material[i], "");

    for(i=0; i<tam1; i++)
        for(j=0, j<tam2; j++;)
            mat_precos[i][j]=0;

    printf("\n cadastro de papelarias: ");
    entrada_nomes(nm_papelarias, tam1-1);
    printf("\n cadastro de materiais: ");
    entrada_nomes(nm_material, tam2);
    printf("\n registro de precos: ");

    i=0;
    while(i<tam1-1) // CADA LINHA, UMA PAPELARIA, CADA COLUNA, UM PRODUTO
    {
        printf("\n Papelaria %s", nm_papelarias[i]);
        j=0;
        while(j<tam2)
        {
            printf("\n Produto %s", nm_material[j]);
            printf("\n Insira o preco do material: ");
            fflush(stdin);
            scanf("%d", &mat_precos[i][j]);
            if(i==0)
            {
                mat_precos[tam1-1][j]=mat_precos[i][j]; // SE FOR A PRIMEIRA LINHA FAÇA COM QUE SEJA USADO PARA COMPARAR PARA MENORES VALORES
            }
            if(mat_precos[i][j]<mat_precos[tam1-1][j])
            {
                mat_precos[tam1-1][j]=mat_precos[i][j];
            }
            j++;
        }
        i++;
    }
}
