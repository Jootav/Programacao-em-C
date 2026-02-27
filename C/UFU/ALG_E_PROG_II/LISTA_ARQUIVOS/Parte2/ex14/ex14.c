#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct{
    int dia,mes,ano;
} Data;

int main(){
    char str[20], nome[30],ch;
    Data dataAtual, dataPessoa;

    printf("Digite o nome do arquivo: "); scanf("%s",str);
    printf("Digite a data atual: "); scanf("%d %d %d",&dataAtual.dia, &dataAtual.mes, &dataAtual.ano);

    FILE *in=fopen(str,"r");
    FILE *out=fopen("saida.txt","w");

    if(in==NULL)
        printf("erro ao abrir o arquivo");

    while(fscanf(in," %[^|]|%d|%d|%d",nome, &dataPessoa.dia, &dataPessoa.mes, &dataPessoa.ano)==4){
        int idade=dataAtual.ano-dataPessoa.ano;
        if (dataAtual.mes < dataPessoa.mes || (dataAtual.mes == dataPessoa.mes && dataAtual.dia < dataPessoa.dia)) {
            idade--;
        }
        fprintf(out,"Nome da pessoa: %s | Idade: %d\n", nome, idade);
    }

    fclose(in);
    fclose(out);
    return 0;
}