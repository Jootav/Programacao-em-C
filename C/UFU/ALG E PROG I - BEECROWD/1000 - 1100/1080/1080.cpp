#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x,maior,i,j;
    i=j=maior=x=0;
    for(i=0; i<100; i++){
        scanf("%d", &x);
        if(i==0){
            maior=x;
        }
        else{
            if(x>maior){
                maior=x;
                j=i;
            }
        }
    }
    printf("%d\n", maior);
    printf("%d\n", j+1);
    return 0;
}