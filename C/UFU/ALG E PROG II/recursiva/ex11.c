#include <stdio.h>
#include <stdlib.h>

int somNesima (int a, int b, int soma)
{
    if(a==b){
        return soma;
    }
    else{
        return(a+somNesima(a+1,b,soma));
    }
}

int main()
{
    int a, b, soma=0;
    scanf("%d%d",&a,&b);
    printf("%d",somNesima(a+1,b,soma));
    return 0;
}
