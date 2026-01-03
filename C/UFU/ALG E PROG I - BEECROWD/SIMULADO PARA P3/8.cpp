/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>*/

#include <bits/stdc++.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i,j,c=0;
    char frase[1001];
    scanf(" %[^\n]s",frase);
    for(i=0;frase[i]!='\0';i++){
        c++;
    }
    printf("%d\n",c);
    return 0;
}