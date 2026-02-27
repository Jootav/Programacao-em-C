#include <bits/stdc++.h>

typedef struct{
    char cor[51],fabri[51];
    int marchas;
    float preco;
} produto;

int main(){
    int i,j,n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    produto vetor[n];

    for(i=0;i<n;i++){
        scanf(" %[^\n]s",vetor[i].cor);
        scanf(" %[^\n]s",vetor[i].fabri);
        scanf("%d %f",&vetor[i].marchas,&vetor[i].preco);
    }
    for(i=0;i<n;i++){
        if(vetor[i].marchas>=a && vetor[i].marchas<=b){
            printf("%s\n%s\n%d\n%.2f\n",vetor[i].cor,vetor[i].fabri,vetor[i].marchas,vetor[i].preco);
        }
    }
    return 0;
}