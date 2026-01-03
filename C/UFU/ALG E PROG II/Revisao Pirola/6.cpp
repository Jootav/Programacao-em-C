#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    float notaA,notaB,notaC,mediaPond;
    char conceito;
    // pesoA = 2, pesoB = 3, pesoC = 5
    scanf("%f%f%f",&notaA,&notaB,&notaC);
    mediaPond=((notaA*2)+(notaB*3)+(notaC*5))/10;
    if(mediaPond>=8.01){
        conceito='A';
    } else if (mediaPond>=7.01&&mediaPond<=8.0) {
        conceito='B';
    } else if (mediaPond>=6.01&&mediaPond<=7.0) {
        conceito='C';
    } else if (mediaPond>=5.01&&mediaPond<=6.0) {
        conceito='D';
    } else if (mediaPond>=0.00&&mediaPond<=5.0) {
        conceito='E';
    }
    printf("CONCEITO = %c",conceito);
    return 0;
}