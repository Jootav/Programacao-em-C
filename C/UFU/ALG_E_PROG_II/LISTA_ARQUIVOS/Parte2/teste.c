#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *file=fopen("teste.txt","rwb");
    int v1[5]={1,2,3,4,5};
    int v2[5]={0,5,0,3,0};

    fwrite(v1,sizeof(int),5,file);
    fread(v2,sizeof(int),5,file);

    for(int i=0;i<5;i++)
        printf("%d ",v2[i]);
}