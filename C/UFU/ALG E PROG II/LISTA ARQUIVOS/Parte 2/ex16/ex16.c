#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void binario(int *num, FILE *out){
    int i=0, bin[32], *ptrBin=bin;

    while(*num>0){
        *(bin+i)=*num%2;
        *num=*num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        fprintf(out,"%d",*(bin+j));
    }
}

int main(){
    FILE *out=fopen("saida.txt","w");

    int vet[10]={12,26,3,45,56,62,78,48,19,10};
    int *ptrVet=vet, i=0;

    for(int i=0;i<10;i++){
        if(*(vet+i)==0){
            fprintf(out,"0");
        }
        else {
            binario(vet+i,out);
        }
        fprintf(out,"\n");
    }
    fclose(out);
    return 0;
}   