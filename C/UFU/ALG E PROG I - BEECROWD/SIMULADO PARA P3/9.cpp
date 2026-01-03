#include <bits/stdc++.h>

typedef struct{
    float preco;
    char nome[51];
} produto;

int main(){
    produto vetor[4];
    int i,c,i_menor=0;
    for(i=0;i<4;i++){
        scanf("%f %[^\n]s",&vetor[i].preco,vetor[i].nome);
    }
    for(i=0;i<4;i++){
        if(vetor[i].preco<vetor[i_menor].preco){
            i_menor=i;
        }
    }
    printf("%.2f %s\n",vetor[i_menor].preco, vetor[i_menor].nome);
    return 0;
}