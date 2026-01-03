/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>*/

#include <bits/stdc++.h>

int main(){
    int i,j,c=0;
    int tamanhonumero;
    char n,numero[150],numero_res[150];
    //scanf("%c",&n);
    //scanf(" %[^\n]s",numero);
    while(scanf(" %c",&n)!=EOF && scanf(" %[^\n]s",numero)!=EOF){
        c=j=0;
        for(i=0;numero[i]!='\0';i++){
            if(numero[i]==n || numero[i]=='0'){
                numero[i]='0';
                c++;
            }
        }
        tamanhonumero=strlen(numero);
        if(tamanhonumero==c){
            strcpy(numero_res,"0");
        }
        else{
            for(i=0;numero[i]!='\0';i++){
                if(numero[i]!='0'){
                    numero_res[j]=numero[i];
                    j++;
                }
            }
            numero_res[j]='\0';
        }
        printf("%s\n",numero_res);
    }
    return 0;
}