#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int idade,total;
    int casados=0,solteiros=0,viuvos=0,separados=0;
    float mediaViuvos;
    char estadoCivil;

    scanf("%d",&idade);
    scanf(" %c",&estadoCivil);
    while(idade>0) {
        if(estadoCivil=='C' || estadoCivil=='c'){
            casados++;
        }
        else if(estadoCivil=='S' || estadoCivil=='s'){
            solteiros++;
        }
        else if(estadoCivil=='V' || estadoCivil=='v'){
            viuvos++;
            mediaViuvos+=idade;
        }
        else if(estadoCivil=='D' || estadoCivil=='d'){
            separados++;
        }
        total++;
        scanf("%d",&idade);
        scanf(" %c",&estadoCivil);
    }
    printf("casados = %d\n",casados);
    printf("solteiros = %d\n",solteiros);
    printf("media de idade viuvas = %0.2f\n",(mediaViuvos/viuvos));
    printf("porcentagem de separados = %0.2f\n",((100.0*separados)/total));

    return 0;
}