#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int codigo, qtd;
    double total;

    scanf("%d%d", &codigo, &qtd);
    if(codigo==1){
        total=qtd*4.00;
    }
    else if(codigo==2){
        total=qtd*4.50;
    }
    else if(codigo==3){
        total=qtd*5.00;
    }
    else if(codigo==4){
        total=qtd*2.00;
    }
    else{
        total=qtd*1.50;
    }
    printf("Total: R$ %.2lf\n", total);

    return 0;
}