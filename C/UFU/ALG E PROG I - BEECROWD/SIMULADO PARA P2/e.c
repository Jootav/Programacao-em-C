#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xF, yF;
    int xP, yP;
    char linha[100];

    for (int i = 1; fgets(linha, sizeof(linha), stdin) != NULL; i++)
    {
        int x = 0;
        for (int j = 0; linha[j] != '\0'; j ++)
        {
            if (linha[j] == 'o') x++;
            if (linha[j] == 'f') {xF = (x++); yF = i;}
            if (linha[j] == 'p') {xP = (x++); yP = i;}
        }
    }

    int distancia = abs(xP - xF) + abs(yP - yF);
    printf("%d\n", distancia);
}
