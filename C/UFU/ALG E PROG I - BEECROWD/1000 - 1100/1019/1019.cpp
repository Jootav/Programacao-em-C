#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n, inteiro;
    double calc, h, m, s;
    h=m=s=n=calc=0;

    scanf("%d", &n);

    if(n>=60){ // 140153 segundos
        calc = n / 60.0; // calc = 2335,883333
        inteiro = calc; // inteiro = 2335
        s = (calc - inteiro)*60; // s = 53
        m = inteiro; // m = 2335
        // h=0 m=2335 s=53
        if(m>=60){
            calc=inteiro=0; //calc = 0;
            calc = m / 60; // calc = 38,9166666667
            inteiro = calc; // inteiro = 38
            m = (calc - inteiro)*60; // m = 55
            h = inteiro; // h = 38
        }
    }
    else{
        s = n;
    }
    printf("%.0lf:%.0lf:%.0lf\n", h, m, s);

    return 0;
}