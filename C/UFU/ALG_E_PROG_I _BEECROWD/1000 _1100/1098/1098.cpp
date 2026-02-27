#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i,j,cont;
    double l,f;
    i=00;
    j=10;
    cont=1; 
    while(i<=20){
        if(i%10==0){ // inteiro
            l=(i/10);
            printf("I=%.0lf ",l);
        }
        else{
            l=(i/10.0);
            printf("I=%.1lf ",l);
        }
        if(j%10==0){ // inteiro
            f=(j/10);
            printf("J=%.0lf\n",f);
        }
        else{
            printf("");
            f=(j/10.0);
            printf("J=%.1lf\n",f);
        }
        
        if(cont==3){
            i+=2;
            j=10+i;
            cont=1;
        }
        else{
            j+=10;
            cont++;
        }
    }
    return 0;
}