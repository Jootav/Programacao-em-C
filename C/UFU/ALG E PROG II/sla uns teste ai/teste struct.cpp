#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

typedef struct {
    char nome[51], platform[51], desenv[51], publicad[51];
    float preco;
    int nota, ano;
} jogo;

void lerVetor(jogo biblioteca[], int tamanho){
    int i,j;
    for(i=0;i<tamanho;i++){
        printf("================ %d° lugar ================\n",i+1);
        printf("NOME DO JOGO......: %s\n",biblioteca[i].nome);// nome do jogo
        printf("DESENVOLVEDORA....: %s\n",biblioteca[i].desenv);// desenvolvedora
        printf("DISTRIBUIDORA.....: %s\n",biblioteca[i].publicad);// publicadora
        printf("ANO DE LANÇAMENTO.: %d\n",biblioteca[i].ano);// ano
        printf("PLATAFORMA........: %s\n",biblioteca[i].platform);// plataforma
        printf("PREÇO.............: R$ %.2f\n",biblioteca[i].preco);// preco
        printf("NOTA (0 a 10).....: %d / 10\n",biblioteca[i].nota);// nota
        Sleep(1000);
    }
}

void carregando(){
    int i,j,n=25;
    printf("Carregando: ");
    for(i=0;i<n;i++){
        printf("|");
        Sleep(250);
    }
    printf("\n\n");
}

void vetDecrescente(jogo biblioteca[], int tamanho){
    int i,j;
    jogo temp;
    printf("\n");
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (biblioteca[j].nota < biblioteca[j+1].nota) {
                temp = biblioteca[j];
                biblioteca[j] = biblioteca[j+1];
                biblioteca[j+1] = temp;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n=3;
    jogo biblioteca[n];
    int i,j,c;
    for(i=0;i<n;i++){
        printf("==========================================\n");
        printf("Insira o nome do %d° jogo................: ",i+1);
        scanf(" %[^\n]s",biblioteca[i].nome);

        printf("Insira a desenvolvedora desse jogo......: ");
        scanf(" %[^\n]s",biblioteca[i].desenv);

        printf("Insira o distribuidora desse jogo.......: ");
        scanf(" %[^\n]s",biblioteca[i].publicad);

        printf("Insira o ano de lançamento..............: ");
        scanf(" %d",&biblioteca[i].ano);

        printf("Insira a plataforma.....................: ");
        scanf(" %[^\n]s",biblioteca[i].platform);

        printf("Insira o preço atual na %s...........: ",biblioteca[i].platform);
        scanf(" %f",&biblioteca[i].preco);

        printf("Qual sua nota para esse jogo? (0 a 10)..: ");
        scanf(" %d",&biblioteca[i].nota);
    }
    vetDecrescente(biblioteca,n);
    carregando();
    lerVetor(biblioteca,n);
    system("pause");
    return 0;
}