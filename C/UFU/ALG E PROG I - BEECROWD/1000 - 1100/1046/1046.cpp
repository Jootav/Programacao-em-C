#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a,b,h;
    a=b=h=0;
    scanf("%d%d",&a,&b);

    if(a<b){
        h=b-a;
    }
    else if(a>b){
        a=24-a;
        h=a+b;
    }
    else{
        h=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", h);
    return 0;
}