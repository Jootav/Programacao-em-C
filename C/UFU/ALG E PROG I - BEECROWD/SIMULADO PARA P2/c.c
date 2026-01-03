#include <stdio.h>

int main()
{
    int grau;
    long int soma = 0;
    scanf("%d", &grau);

    int matriz[grau][grau];
    for (int i = 0; i < grau; i++)
        for (int j = 0; j < grau; j++)
            scanf("%d", &matriz[i][j]);

    for (int i = 0; i < grau; i++)
        for (int j = 0; j < grau; j++)
            if ((i == ((grau - 1) - j)) && (matriz[i][j] % 2 == 1))
                soma += matriz[i][j];

    printf("%ld\n", soma);
}
