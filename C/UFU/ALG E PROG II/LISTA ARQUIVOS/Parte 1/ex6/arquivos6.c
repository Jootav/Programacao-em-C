#include<stdio.h>
#include<stdlib.h>

int main (){
    char str[20];
    int cont=0;
    FILE *file=fopen("../palavras_computacao.txt","r");


    while(fgets(str,20,file)!=NULL){
        cont++;   
    }
    printf("%d\n",cont);
    return 0;
}
