#include <stdio.h>

int main()
{
    int l,c;
    scanf("%d %d", &l, &c);

    int matriz[l][c];
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &matriz[i][j]);

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < l; i++)
        {
            printf("%d", matriz[i][j]);
            if (i != l-1) printf(" ");
        }
        printf("\n");
    }
}
