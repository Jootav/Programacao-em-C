#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char frase[1001];
    char caractere;
    int i,c=0,tamanho;
    scanf("%c",&caractere);
    if(caractere>=65 && caractere<=90){
        caractere+=32;
    }
    scanf(" %[^\n]s",frase);
    tamanho=strlen(frase);
    for(i=0;frase[i]!='\0';i++){
        if(frase[i]>=65 && frase[i]<=90){
            frase[i]+=32;
        }
        if(frase[i]==caractere){
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}