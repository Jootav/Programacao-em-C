#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    int dia,mes,ano;
}Data;

typedef struct {
    char rua[50],bairro[50],cidade[50];
}Endereco;

typedef struct {
    Data dataDoComp;
    char descDoComp[50];
}Compromisso;

typedef struct {
    char nome[50], telefone[50];
    Endereco endereco;
    Data dataDeNasc;
    Compromisso compromisso;
}Pessoa;

int main()
{
    int i,j;
    Pessoa pessoas[5],temp;

    for(i=0;i<5;i++){ //lendo
        scanf(" %[^\n]s",pessoas[i].nome);
        fflush(stdin);
        scanf(" %[^\n]s",pessoas[i].endereco.rua);
        scanf(" %[^\n]s",pessoas[i].endereco.bairro);
        scanf(" %[^\n]s",pessoas[i].endereco.cidade);
        fflush(stdin);
        scanf(" %[^\n]s",pessoas[i].telefone);
        scanf("%d", &pessoas[i].dataDeNasc.dia);
        scanf("%d", &pessoas[i].dataDeNasc.mes);
        scanf("%d", &pessoas[i].dataDeNasc.ano);
        scanf("%d", &pessoas[i].compromisso.dataDoComp.dia);
        scanf("%d", &pessoas[i].compromisso.dataDoComp.mes);
        scanf(" %[^\n]s",pessoas[i].compromisso.descDoComp);
        fflush(stdin);
    }
    for(j=0;j<25;j++){
        for(i=0;i<4;i++){
            if(strcmp(pessoas[i].nome,pessoas[i+1].nome) > 0){ // a > b
                temp=pessoas[i];
                pessoas[i]=pessoas[i+1];
                pessoas[i+1]=temp;
            }    
        }
    }
    for(i=0;i<5;i++){
        printf("==================\n");
        printf("%s\n",pessoas[i].nome);
        printf("%s\n",pessoas[i].endereco.rua);
        printf("%s\n",pessoas[i].endereco.bairro);
        printf("%s\n",pessoas[i].endereco.cidade);
        printf("%s\n",pessoas[i].telefone);
        printf("%d / %d / %d\n",pessoas[i].dataDeNasc.dia,pessoas[i].dataDeNasc.mes,pessoas[i].dataDeNasc.ano);
        printf("Compromisso em %d / %d: %s\n",pessoas[i].compromisso.dataDoComp.dia,pessoas[i].compromisso.dataDoComp.mes,pessoas[i].compromisso.descDoComp);
    }
    return 0;
}