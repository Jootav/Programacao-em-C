#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    char linha[100];
    FILE *file1=fopen("../entrada.txt","r");
    
    printf("Palavras em entrada.txt que possui a letra m: \n");
    while(fgets(linha,sizeof(linha),file1)!=NULL){
        char *palavra = strtok(linha, " \n"); //"strtok"
        while(palavra!=NULL){
            int flag=0;
            for (int i = 0; i < strlen(palavra); i++) {
                if (palavra[i] == 'm' || palavra[i] == 'M') {
                    flag = 1;
                }
            }
            if(flag==1)
                printf("%s\n",palavra);
            palavra = strtok(NULL, " \n");
        }
    }
    fclose(file1);
    return 0;
}
