#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
    double A,B,C,delta, r1, r2;

    scanf("%lf%lf%lf", &A,&B,&C);
    delta = (pow(B,2))-4*A*C;
    if(delta < 0 || A == 0){
        printf("Impossivel calcular\n");
    }
    else{
        r1 = ((-B)+sqrt(delta))/(2*A);
        r2 = ((-B)-sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    return 0;
}