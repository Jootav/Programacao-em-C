#include <stdio.h>

int main()
{
    long int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%ld\n", a^b);
    }
}
