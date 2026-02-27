#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double num[3],a,b,c;
    int aux,i,j;
    aux=i=j=a=b=c=0;

    for (i=0;i<3;i++){
        scanf("%lf", &num[i]);
    }
    for (j=1;j<3;j++){
        for (i=0;i<2;i++){
            if (num[i] < num[i + 1]){
                aux = num[i];
                num[i] = num[i + 1];
                num[i + 1] = aux;
            }
        }
    }
    a=num[0];
    b=num[1];
    c=num[2];
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if((a*a)==(b*b)+(c*c)){
            printf("TRIANGULO RETANGULO\n");
        }
        if((a*a)>(b*b)+(c*c)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a*a)<(b*b)+(c*c)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c && a==c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b || b==c || a==c){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    

    return 0;
}