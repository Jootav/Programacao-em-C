#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    long int n1,n2,n3;

    while(scanf("%ld %ld",&n1,&n2)!=EOF){
        printf("%ld\n",n1^n2);
    }
    return 0;
}