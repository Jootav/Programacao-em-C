#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int A, int B){
    int res;

    res = ((A+B)+abs(A-B))/2;

    return res;
}

int main() {

    int A, B, C, MAIOR;

    scanf("%d%d%d",&A, &B, &C);
    MAIOR = maior(A, B);
    MAIOR = maior(MAIOR, C);
    printf("%d eh o maior\n", MAIOR);

    return 0;
}