#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

typedef struct{
    char nome[51];
    float preco;
} loja;

int main(){
    int i,j,i_menor=0;
    loja vet[4];
    for(i=0;i<4;i++){
        scanf("%f %[^\n]s",&vet[i].preco,vet[i].nome);
    }
    for(i=0;i<4;i++){
        if(vet[i].preco<vet[i_menor].preco){
            i_menor=i;
        }
    }
    printf("%.2f %s",vet[i_menor].preco, vet[i_menor].nome);
    return 0;
}