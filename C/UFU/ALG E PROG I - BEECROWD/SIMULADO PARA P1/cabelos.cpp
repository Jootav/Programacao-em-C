#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double E,G;
    int PORC;
    scanf("%lf%lf",&E,&G);
    E=E*1000;
    G=G*1000;
    PORC=(int)((E/G)*100);
    if(PORC>=73){
        printf("GASOLINA\n");
    }
    else if(PORC<73){
        printf("ETANOL\n");
    }
    return 0;
}