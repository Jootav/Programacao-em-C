#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n, inteiro;
    double calc, a, m, d;
    a=m=d=n=calc=0;

    scanf("%d", &n);

    if(n>=365){ // 800 dias
        calc = n / 365.0; // calc = 2,19178
        inteiro = calc; // inteiro = 2
        d = (calc - inteiro)*365; // d = 69,9999999935 
        a = inteiro; 
        if(d>=30){
            calc=inteiro=0; //calc = 0
            calc = d / 30; // calc = 2,333333331
            inteiro = calc; // inteiro = 2
            d = (calc - inteiro)*30; // d = 10
            m = inteiro; // m = 2
        }
    }
    else{
        if(n>=30){
            calc=inteiro=0; //calc = 0
            calc = n / 30.0; // calc = 3,33333
            inteiro = calc; // inteiro = 3
            d = (calc - inteiro)*30; // d = 10
            m = inteiro; // m = 3
        }
        else{
            d=n;
        }
    }
    printf("%.0lf ano(s)\n", a);
    printf("%.0lf mes(es)\n", m);
    printf("%.0lf dia(s)\n", d);

    return 0;
}