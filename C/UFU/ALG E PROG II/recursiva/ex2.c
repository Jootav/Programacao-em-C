#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterNum (int num) {
    if(num==0){
        return;
    } else {
        printf("%d",num%10);
        inverterNum(num/10);
    }
}

int main() {
    int num=12345,num2=0;
    inverterNum(num);
    return 0;
}
