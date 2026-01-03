#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int cont,n,x,i;
    cont=n=x=i=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x);
        if(x>=10 && x<=20){
            cont++;
        }
    }
    printf("%d in\n", cont);
    printf("%d out\n", (n-cont));

    return 0;
}