#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    char str[20];
    int cont1=0, cont2=0,cont3=0;
    FILE *file1=fopen("../palavras_computacao.txt","r");
    
    while(fgets(str,20,file1)!=NULL){
        if(strlen(str)>5){
            cont1++;
        }
        if(strlen(str)>=3 && strlen(str)<=5){
            cont2++;
        }
        if(strlen(str)<=2){
            cont3++;
        }
    }

    printf("%d palavras tem mais de 5 letras\n",cont1);
    printf("%d palavras tem entre 3 e 5 letras\n",cont2);
    printf("%d palavras tem 2 ou menos letras\n",cont3);

    return 0;
}
