#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int dist;
    double comb;    

    scanf("%d%lf", &dist, &comb);
    printf("%.3lf km/l\n", (dist/comb));

    return 0;
}