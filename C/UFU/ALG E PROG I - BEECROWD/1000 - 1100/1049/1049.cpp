#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char entrada[20];
    gets(entrada);

    if(strcmp(entrada, "vertebrado") == 0){ // vertebrado
        gets(entrada);
        if(strcmp(entrada, "ave") == 0){ // ave
            gets(entrada);
            if(strcmp(entrada, "carnivoro") == 0){
                printf("aguia\n");
            }
            else{ // onivoro
                printf("pomba\n");
            }
        }
        else{ // mamifero
            gets(entrada);
            if(strcmp(entrada, "onivoro") == 0){
                printf("homem\n");
            }
            else{ // herbivoro
                printf("vaca\n");
            }
        }
    }
    else{ // invertebrado
        gets(entrada);
        if(strcmp(entrada, "inseto") == 0){ // inseto
            gets(entrada);
            if(strcmp(entrada, "hematofago") == 0){
                printf("pulga\n");
            }
            else{ // onivoro
                printf("lagarta\n");
            }
        }
        else{ // anelideo
            gets(entrada);
            if(strcmp(entrada, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else{ // onivoro
                printf("minhoca\n");
            }
        }
    }
    return 0;
}