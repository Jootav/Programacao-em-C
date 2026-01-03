#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, contp, conti, contpo, contne, num;
    num=contp=conti=contpo=contne=0;
    for(i=0;i<5;i++){
        scanf("%d", &num);
        if(num>0){
            contpo++;
            if(num%2==0){
                contp++;
            }
            else{
                conti++;
            }
        }
        else if(num<0){
            contne++;
            if(num%2==0){
                contp++;
            }
            else{
                conti++;
            }
        }
        else{ // ZERO
            contp++;
        }
    }
    printf("%d valor(es) par(es)\n", contp);
    printf("%d valor(es) impar(es)\n", conti);
    printf("%d valor(es) positivo(s)\n", contpo);
    printf("%d valor(es) negativo(s)\n", contne);
    return 0;
}