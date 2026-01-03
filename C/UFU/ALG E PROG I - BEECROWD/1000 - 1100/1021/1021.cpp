#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int inteiro, i;
    double din, calc;
    double notas[6] = {10000,5000,2000,1000,500,200};
    double moedas[6] = {100,50,25,10,5,1};

    scanf("%lf", &din);  // 576.73
    din = din * 100; // 57673

    printf("NOTAS:\n");
    i=0;
    while(i < 6){
        calc = din / notas[i];
        inteiro = calc;
        din = din - (inteiro*notas[i]);
        printf("%d nota(s) de R$ %.2lf\n", inteiro, (notas[i]/100));
        i++;
    }

    i=inteiro=0;
    printf("MOEDAS:\n");    
    while(i < 6){
        calc = din / moedas[i];
        inteiro = calc;
        din = din - (inteiro*moedas[i]);
        printf("%d moeda(s) de R$ %.2lf\n", inteiro, (moedas[i]/100));
        i++;
    }
    return 0;
}