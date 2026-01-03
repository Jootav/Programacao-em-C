#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

//12KM/L

int main() {

    int horas, vel_media;
    float dist;

    scanf("%d%d", &horas, &vel_media);
    dist = horas * vel_media;
    printf("%.3f\n", dist/12);

    return 0;
}