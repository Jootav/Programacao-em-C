#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

int main() {

    int din, inteiro, i;
    int notas[7] = {100,50,20,10,5,2,1};
    float calc;

    scanf("%d", &din);
    printf("%d\n", din);

    i=0;
    while(i < 7){
        calc = din / notas[i];
        inteiro = calc;
        din = din - (inteiro*notas[i]);
        printf("%d nota(s) de R$ %d,00\n", inteiro, notas[i]);
        i++;
    }

    return 0;
}