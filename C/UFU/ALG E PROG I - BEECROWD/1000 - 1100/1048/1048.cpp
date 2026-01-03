#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double sal, reaj;
    scanf("%lf", &sal);
    if(sal > 0 && sal <= 400.00){
        reaj=sal*0.15;
        sal=sal+reaj;
        printf("Novo salario: %.2lf\n", sal);
        printf("Reajuste ganho: %.2lf\n", reaj);
        printf("Em percentual: 15 %%\n"); 
    }
    else if(sal > 400.00 && sal <= 800.00){
        reaj=sal*0.12;
        sal=sal+reaj;
        printf("Novo salario: %.2lf\n", sal);
        printf("Reajuste ganho: %.2lf\n", reaj);
        printf("Em percentual: 12 %%\n"); 
    }
    else if(sal > 800.00 && sal <= 1200.00){
        reaj=sal*0.10;
        sal=sal+reaj;
        printf("Novo salario: %.2lf\n", sal);
        printf("Reajuste ganho: %.2lf\n", reaj);
        printf("Em percentual: 10 %%\n"); 
    }
    else if(sal > 1200.00 && sal <= 2000.00){
        reaj=sal*0.07;
        sal=sal+reaj;
        printf("Novo salario: %.2lf\n", sal);
        printf("Reajuste ganho: %.2lf\n", reaj);
        printf("Em percentual: 7 %%\n"); 
    }
    else{
        reaj=sal*0.04;
        sal=sal+reaj;
        printf("Novo salario: %.2lf\n", sal);
        printf("Reajuste ganho: %.2lf\n", reaj);
        printf("Em percentual: 4 %%\n"); 
    }
    return 0;
}