#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vet[3]={3,6,9}, *ponteiroVar=NULL;
    ponteiroVar=vet;
    for(int i=0;i<3;i++){
        printf("%d\n",*ponteiroVar);
        ponteiroVar++;
    }
}