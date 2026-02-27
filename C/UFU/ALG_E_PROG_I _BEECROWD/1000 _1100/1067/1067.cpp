#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i, num;
    scanf("%d", &num);
    i=0;
    while(i<12){
        if(num%2!=0){
            printf("%d\n", num);
        }
        num++;
        i++;
    }
    return 0;
}