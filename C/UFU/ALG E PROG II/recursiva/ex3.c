#include <stdio.h>
#include <stdlib.h>

int contDigit (long int numero, int cont)
{
    if(numero<=0){
        return(cont);
    }
    else{
        cont++;
        return(contDigit((numero/10),cont));
    }
}

int main()
{
    long int n;
    int cont;
    scanf("%d",&n);
    printf("%d",contDigit(n,cont));
    return 0;
}
