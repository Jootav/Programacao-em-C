#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i,j,k,c=0,n=0;
    int tamanho=31;
    char programador[tamanho],juiz[tamanho],copiaProg[tamanho],copiaJuiz[tamanho];
    
    //receber o numero de casos
    scanf("%d",&n);
    getchar(); // limpa \n do buffer
    
    for(k=0;k<n;k++){ // for para loop de n casos
        fgets(programador,sizeof(programador),stdin); // linha do programador
        fgets(juiz,sizeof(juiz),stdin); // recebe linha do juiz

        //programador[strcspn(programador, "\n")] = '\0'; // teste de retirada do \n
        //juiz[strcspn(juiz, "\n")] = '\0'; // teste de retirada do \n

        c=0;
        for (i=0; programador[i] != '\0'; i++){
            if (programador[i] != ' ')
            {
                copiaProg[c] = programador[i];
                c++;
            }
        }
        copiaProg[c] = '\0';
        c=0;
        for (i=0; juiz[i] != '\0'; i++){
            if (juiz[i] != ' ')
            {
                copiaJuiz[c] = juiz[i];
                c++;
            }
        }
        copiaJuiz[c] = '\0';

        if(strcmp(programador,juiz)==0){ // se 0, igual
            printf("Caso %d: Yes\n", k+1);
        }
        else{
            if(strcmp(copiaJuiz,copiaProg)==0){
                printf("Caso %d: Output Format Error\n", k+1);
            }
            else{
                printf("Caso %d: Wrong Answer\n", k+1);
            }
        }
    }
    return 0;
}