#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
 
    int id1, id2;
    float n1, n2, p1, p2;

    scanf("%d%f%f", &id1, &n1, &p1);
    scanf("%d%f%f", &id2, &n2, &p2);

    printf("VALOR A PAGAR: R$ %.2f\n", (n1*p1)+(n2*p2));

    return 0;
}