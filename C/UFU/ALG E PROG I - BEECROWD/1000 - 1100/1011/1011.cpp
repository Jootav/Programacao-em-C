#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

    const double pi = 3.14159;
    double raio;

    scanf("%lf", &raio);
    printf("VOLUME = %.3lf\n", (4.0/3) * pi * (pow(raio, 3)));

    return 0;
}