#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n = 0;
    int cont = 0;
    float total = 0;

    scanf("%d",&n);
    while(n>=0){
        total=total+n;
        cont++;
        scanf("%d",&n);
    }
    printf("%.2f\n",total/cont);
    return 0;
}