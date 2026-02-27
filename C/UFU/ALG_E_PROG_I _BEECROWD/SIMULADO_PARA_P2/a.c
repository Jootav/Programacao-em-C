#include <stdio.h>

int main()
{
    int grau;
    scanf("%d", &grau);

    int matriz[grau][grau];

    for (int i = 0; i < grau; i++)
        for (int j = 0; j < grau; j++)
        {
            if (i == j) matriz[i][j] = 1;
            else matriz[i][j] = 0;
        }

    for (int i = 0; i < grau; i++)
    {
        for (int j = 0; j < grau; j++)
        {
            printf("%d", matriz[i][j]);
            if (j != grau -1) printf(" ");
        }
        printf("\n");
    }
}
