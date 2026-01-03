#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, num_questoes, acertos;
    char gabarito[81], opcao[81];

    i=num_questoes=acertos=0;

    scanf("%d", &num_questoes);

    if(num_questoes >= 0 || num_questoes <= 80){
        //fflush(stdin);
        for (i = 0; i < num_questoes; i++){ // GABARITO
            scanf(" %c", &gabarito[i]);
        }

        //fflush(stdin);
        for (i = 0; i < num_questoes; i++){ // OPÇÕES
            scanf(" %c", &opcao[i]);
        }

        for (i = 0; i < num_questoes; i++){ // GABARITO
            if (opcao[i] == gabarito[i]){
                acertos++;
            }
        }
        printf("%d", acertos);
    }

    return 0;
}