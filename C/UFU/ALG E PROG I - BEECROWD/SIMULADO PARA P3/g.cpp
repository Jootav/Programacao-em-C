#include <bits/stdc++.h>

int main(){
    int i,j,c,tamanho;
    char n,numero[101],numerores[101];
    while(scanf(" %c",&n)!=EOF && scanf(" %[^\n]s",numero)!=EOF){
        c=j=0;
        for(i=0;numero[i]!='\0';i++){
            if(numero[i]==n || numero[i]=='0'){
                numero[i]='0';
                c++;
            }
        }
        tamanho=strlen(numero);
        if(tamanho==c){
            strcpy(numerores,"0");
        }
        else{ // nem tudo é 0
            for(i=0;numero[i]!='\0';i++){
                if(numero[i]!='0'){
                    numerores[j]=numero[i];
                    j++;
                }
            }
            numerores[j]='\0';
        }
        printf("%s\n",numerores);
    }
    return 0;
}