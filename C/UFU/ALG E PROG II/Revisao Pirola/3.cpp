#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    float soma,custoFab,custoCon;
    scanf("%f",&custoFab);
    custoCon=custoFab+(custoFab*0.28)+(custoFab*0.45);
    printf("%0.2f",custoCon);

    return 0;
}