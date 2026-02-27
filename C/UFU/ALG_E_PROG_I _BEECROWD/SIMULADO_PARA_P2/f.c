#include <stdio.h>
#include <string.h>

int main()
{
    int testes;
    scanf("%d", &testes);
    getchar();

    for (int i = 0; i < testes; i++)
    {
        int s, igual = 0, pErr = 0;
        char ref[50], refsemespaco[50], testsemespaco[50], test[50];
        fgets(ref, sizeof(ref), stdin);
        fgets(test, sizeof(ref), stdin);

        s = 0;
        for (int j = 0; ref[j] != '\0'; j++)
            if (ref[j] != ' ') refsemespaco[(s++)] = ref[j];
        refsemespaco[s] = '\0';

        s = 0;
        for (int j = 0; test[j] != '\0'; j++)
            if (test[j] != ' ') testsemespaco[(s++)] = test[j];
        testsemespaco[s] = '\0';

        if (strcmp(ref, test) == 0) igual = 1;
        if (strcmp(refsemespaco, testsemespaco) == 0) pErr = 1;

        if (igual) printf("Caso %d: Yes\n", i+1);
        else if (pErr) printf("Caso %d: Output Format Error\n", i+1);
        else printf("Caso %d: Wrong Answer\n", i+1);
    }
}
