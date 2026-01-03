#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

// Função para "remover acento"
wchar_t sem_acento(wchar_t c) {
    switch(c) {
        case L'á': case L'à': case L'ã': case L'â': case L'ä': return L'a';
        case L'Á': case L'À': case L'Ã': case L'Â': case L'Ä': return L'a';
        case L'é': case L'è': case L'ê': case L'ë': return L'e';
        case L'É': case L'È': case L'Ê': case L'Ë': return L'e';
        case L'í': case L'ì': case L'î': case L'ï': return L'i';
        case L'Í': case L'Ì': case L'Î': case L'Ï': return L'i';
        case L'ó': case L'ò': case L'õ': case L'ô': case L'ö': return L'o';
        case L'Ó': case L'Ò': case L'Õ': case L'Ô': case L'Ö': return L'o';
        case L'ú': case L'ù': case L'û': case L'ü': return L'u';
        case L'Ú': case L'Ù': case L'Û': case L'Ü': return L'u';
        case L'ç': case L'Ç': return L'c';
        default: return towlower(c); // converte para minúsculo
    }
}

// Função para verificar se é palíndromo
int eh_palindromo(wchar_t *frase) {
    wchar_t limpa[600];
    int n = 0;

    // normalizar frase
    for (int i=0; frase[i]!=L'\0'; i++) {
        if (iswalpha(frase[i]) || frase[i]==L'ç' || frase[i]==L'Ç') {
            limpa[n++] = sem_acento(frase[i]);
        }
    }
    limpa[n] = L'\0';

    // checar palíndromo
    int i=0, j=n-1;
    while (i < j) {
        if (limpa[i] != limpa[j]) return 0; // não é palíndromo
        i++; j--;
    }
    return 1; // é palíndromo
}

int main() {
    setlocale(LC_ALL, ""); // habilita UTF-8 (Linux/macOS)
    
    wchar_t frase[600];

    while (fgetws(frase, 600, stdin)) {
        frase[wcslen(frase)-1] = L'\0'; // remove '\n'

        if (eh_palindromo(frase)) {
            wprintf(L"sim\n");
        } else {
            wprintf(L"nao\n");
        }
    }

    return 0;
}
