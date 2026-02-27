#include<stdio.h>
#include<stdlib.h>

/*Faca um programa que pergunte ao usuario quantos valores ele deseja armazenar em
um vetor de double, depois aloque dinamicamente o espa ̧co de mem ́oria de acordo
com o especificado pelo usuario. Esse vetor deve ter um tamanho maior ou igual
a 10 elementos. Use este vetor dinˆamico como um vetor comum, atribuindo aos 10
primeiros elementos do vetor valores aleatorios (usando a funcao rand) entre 0 e 100.
Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.*/

int main(){
    char opc;
    int n;
    double *p;
    scanf("%d",&n);
    p= (double *) calloc (n,sizeof(double));
    for(int i=0;i<n;i++){
        p[i]=rand()%101;
        printf("%.1lf ",p[i]);
    }
    //abaixo foi só brincando com o codigo (realloc)
    printf("\nDeseja criar mais %d espacos (s/n)?\n",n);
    printf("> ");
    scanf(" %c",opc);
    if(opc='s'){
        p = realloc(p,2*n*sizeof(double));
        for(int i=n;i<2*n;i++){
            p[i]=rand()%101;
        }
    }
    for(int i=0;i<2*n;i++){
        printf("%.1lf ",p[i]);
    }
    return 0;
}