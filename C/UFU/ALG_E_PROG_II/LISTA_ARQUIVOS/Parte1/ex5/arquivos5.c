#include<stdio.h>
#include<stdlib.h>

int main (){
    char str[20];
    FILE *file;
    file = fopen("../entrada2.txt","a");
    scanf("%s",str);
    fputs(str,file);

    return 0;
}
