#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *in=fopen("entrada.txt","r"), *out=fopen("saida.txt","w");
    int m,n,qtdAnuladas;
    int posX,posY;

    if(in==NULL || out ==NULL){
        printf("erro ao abrir um dos arquivos!\n");
    }

    fscanf(in,"%d %d %d",&m,&n,&qtdAnuladas); //ler a dimensao e as possicoes anuladas
    int mat[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            mat[i][j]=1;

    while((fscanf(in,"%d %d",&posX,&posY))==2)
        mat[posX][posY]=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fprintf(out, "%d ",mat[i][j]);
        }
        fprintf(out, "\n");
    }
    
    fclose(in); fclose(out);
    return 0;
}   