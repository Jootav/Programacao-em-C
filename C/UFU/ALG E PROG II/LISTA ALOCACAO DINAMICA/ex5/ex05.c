#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de di-
mens ̃oes definidas pelo usu ́ario, e preencha a matriz com valores informados pelo
usu ́ario. O programa deve ent ̃ao construir um outro vetor que contenha exatamente os
n ́umeros que aparecem na matriz. Por exemplo, caso a matriz seja [[1,3,5],[2,3,1],[1,1,6]],
o vetor resultante ser ́a [1,3,5,2,6]. O vetor n ̃ao precisa estar ordenado ao final da
execu ̧c ̃ao, e seu tamanho deve coincidir com o necess ́ario para o resultado.*/

int main(){
    char opc;
    int m,n,**p;
    scanf("%d%d",&m,&n);
    p=(int**) calloc (m,sizeof(int*));
    for(int i=0;i<m;i++){
        p[i]=(int*) calloc (n,sizeof(int));
        for(int j=0;j<n;j++){
            p[i][j]=rand()%100;
            printf("%.2d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}