#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n1, n2, media;
    
    scanf("%f%f", &n1, &n2);

    if(n1 > 0 || n1 < 10.0 || n2 > 0 || n2 < 10.0){
        media = ((n1 * 2) + (n2 * 3)) / 5;
        if (media >= 7)
        {
            printf("Aprovado\n");
        }
        else if (media < 3)
        {
            printf("Reprovado\n");
        }
        else
        {
            printf("Final\n");
        }
    }
    
    return 0;
}