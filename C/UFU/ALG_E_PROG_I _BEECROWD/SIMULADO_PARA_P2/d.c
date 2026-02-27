#include <stdio.h>

int main()
{
    char frase[300];
    fgets(frase, sizeof(frase), stdin);

    int digitos = 0;
    for (int i = 0; frase[i] != '\0'; i++)
        if (frase[i] >= '0' && frase[i] <= '9') digitos ++;

    printf("%d\n", digitos);
}
