#include <stdio.h>

int main()
{
    int g, total = 1;
    scanf("%d", &g);


    for (int i = 0; i < g; i++)
        total = total * 2;

    for (int i = 0; i < total; i ++)
    {
        for (int j = g - 1; j >= 0; j--)
        {
            int bit = (i>>j) & 1;
            printf("%d", bit);
            if (j > 0) printf(" ");
        }
        printf("\n");
    }
}
