#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirString(char *palavra) {
    if(*palavra=='\0'){
        return;
    }
    imprimirString(palavra+1);
    printf("%c",*palavra);
}

int main() {
    char palavra[]="string", caractere;

    imprimirString(palavra);

    return 0;
}
