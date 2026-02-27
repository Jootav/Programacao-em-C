#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    char frase[1001];
    int i,j,n,c,cont;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        scanf(" %[^\n]s",frase);
        //int tamanho=strlen(frase);
        for(j=0;frase[j]!='\0';j++){
            frase[j] += c; // Soma c diretamente
            if (frase[j] > 'Z'){
                frase[j] -= 26;
            }
            if (frase[j] < 'A'){
                frase[j] += 26;
            }
        }
        printf("%s\n",frase);
    }
    return 0;
}