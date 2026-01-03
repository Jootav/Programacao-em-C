#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
    setlocale(LC_CTYPE, "Portuguese");

    int j = 0;
    char frase_semacento[502], frase[502];
    while(fgets(frase, sizeof(frase), stdin) != NULL) {   
        frase[strcspn(frase, "\n")] = '\0';
        for (int i = 0; frase[i] != '\0'; i++) {
            unsigned char caractere = frase[i];
            caractere = tolower(caractere);
            if (caractere == 231) {
                caractere = 'c';
            }
            if (caractere == 225 || caractere == 224 || caractere == 226 || caractere == 227) {
                caractere = 'a';
            }
            if (caractere == 234 || caractere == 233) {
                caractere = 'e';
            }
            if (caractere == 237 || caractere == 236) {
                caractere = 'i';
            }
            if (caractere == 243|| caractere == 244 || caractere == 245) {
                caractere = 'o';
            }
            if (caractere == 250 || caractere == 249) {
                caractere = 'u';
            }

            if (isalpha(caractere)) {
                frase_semacento[j] = caractere;
                j++;
            }
        }
        frase_semacento[j] = '\0';

        int p = 0;
        int q = strlen(frase_semacento) - 1;
        int flag = 0;

        while (q > p) {
            if (frase_semacento[p] != frase_semacento[q]) {
                printf("nao\n");
                flag = 1;
                break;
            }
            p++;
            q--;
        }

        if (flag == 0) printf("sim\n");
        j = 0;
        flag = 0;
    }
    return 0;
}