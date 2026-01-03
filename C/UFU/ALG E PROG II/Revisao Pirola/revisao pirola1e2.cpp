#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    long int idadeEmDias, anos, meses, dias;
    // scanf("%ld%ld%ld",&anos, &meses, &dias);
    // dias=dias+(meses*30)+(anos*12*30);
    // printf("%ld",dias);
    
    scanf("%ld",&idadeEmDias);
    dias=idadeEmDias%30;
    meses=(idadeEmDias/30)%12;
    anos=idadeEmDias/360;
    printf("%ld dia(s), %ld mes(es) e %ld ano(s).",dias,meses,anos);


    return 0;
}