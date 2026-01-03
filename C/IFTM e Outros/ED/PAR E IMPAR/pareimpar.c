#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont, i, j, numero, vetentrada[15], vetpar[5], vetimpar[5];
    numero=i=j=cont=0;

    i=0;
    while(i<5)
    {
        vetpar[i]=0;
        vetimpar[i]=0;
        i++;
    }

    i=0;
    while(i<15)
    {
        vetentrada[i]=0;
        i++;
    }

    i=0;
    while(i<15)
    {
        scanf("\n%d", &vetentrada[i]);
        i++;
    }

    cont=i=j=0;
    while(cont<15)
    {
        if(vetentrada[cont] % 2 == 0)
        {
            vetpar[i]=vetentrada[cont];
            i++;
            if(i==5)
            {
                i=0;
                while(i<5)
                {
                    printf("\npar[%d] = %d", i, vetpar[i]);
                    i++;
                }
                i=0;
            }
        }
        else
        {
            vetimpar[j]=vetentrada[cont];
            j++;
            if(j==5)
            {
                j=0;
                while(j<5)
                {
                    printf("\nimpar[%d] = %d", j, vetimpar[j]);
                    j++;
                }
                j=0;
            }
        }
        cont++;
    }

    cont=0;
    while (cont<j)
    {
        printf("\nimpar[%d] = %d", cont, vetimpar[cont]);
        cont++;
    }

    cont=0;
    while (cont<i)
    {
        printf("\npar[%d] = %d", cont, vetpar[cont]);
        cont++;
    }
    

    return 0;
}
