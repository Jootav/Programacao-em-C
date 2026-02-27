#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i,n=0;
    char frase[5001];

    scanf("%d",&n);
    scanf(" %[^\n]s",frase);
    for(i=0;i<n;i++){
        printf("%s\n",frase);
    }    
    return 0;
}