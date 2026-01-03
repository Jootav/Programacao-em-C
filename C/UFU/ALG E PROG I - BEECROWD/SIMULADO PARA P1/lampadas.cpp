#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A,E;
    E=0;
    scanf("%d",&A);
    if(A<10){
        printf("40\n");
    }
    else if(A>=10 && A<15){
        printf("60\n");
    }
    else if(A>=15 && A<20){
        printf("79\n");
    }
    else if(A>=20 && A<25){
        printf("97\n");
    }
    else if(A>=25 && A<30){
        printf("114\n");
    }
    else if(A>=30 && A<35){
        printf("130\n");
    }
    else if(A>=35 && A<40){
        printf("145\n");
    }
    else if(A>=40 && A<45){
        printf("159\n");
    }
    else if(A>=45 && A<50){
        printf("172\n");
    }
    return 0;
}