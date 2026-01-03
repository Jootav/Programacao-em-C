#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int var1=10, *ponteiroVar1;
    char var2[10]="joao\0", *ponteiroVar2;
    float var3=10.5, *ponteiroVar3;
    ponteiroVar1=&var1;
    ponteiroVar2=var2;
    ponteiroVar3=&var3;

    printf("%d ",var1);
    *ponteiroVar1=20;
    printf("%d ",var1);

    printf("%s ",var2);
    strcpy(ponteiroVar2,"joaovito\0");
    printf("%s ",var2);
}