#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>  

int main(){
    /*int i,j,d,soma;
    scanf("%d",&d);
    int m[d][d];
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            scanf("%d",&m[i][j]);
        }   
    }
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            if((i+j)==d-1 && m[i][j]%2!=0){
                soma+=m[i][j];
            }
        }   
    }
    printf("%d\n",soma);

    int i,j,d=0;
    char frase[300];
    fgets(frase,sizeof(frase),stdin);
    for(i=0;frase[i]!='\0'; i++){
        if(frase[i]>=48 && frase[i]<=57){
            d++; // contador de quantos digitos há na frase
        }
    }
    printf("%d",d);

    int i,j,ifas,jfas,ipac,jpac;
    int dis,col;
    char linha[100];

    for(i=1;fgets(linha,sizeof(linha),stdin)!=NULL;i++){
        col=0;
        for(j=0;linha[j]!='0';j++){
            if(linha[j]=='o'){
                col++;
            }
            if(linha[j]=='p'){
                ipac=i;
                jpac=col++;
            }
            if(linha[j]=='f'){
                ifas=i;
                jfas=col++;
            }
        }
    }
    dis=abs(ifas-ipac)+abs(jfas-jpac);
    printf("%d\n",dis);*/

    int i,j,c,k,casos;
    int tamanho=31;
    char prog[tamanho],juiz[tamanho],cProg[tamanho],cJuiz[tamanho];

    scanf("%d",&casos);
    getchar();
    for(k=0;k<casos;k++){
        fgets(prog, sizeof(prog), stdin);
        fgets(juiz, sizeof(juiz), stdin);

        c = 0;
        for (i = 0; prog[i] != '\0'; i++){ // retirada de espaços
            if (prog[i] != ' ')
            {
                cProg[c] = prog[i];
                c++;
            }
        }
        cProg[c] = '\0';

        c = 0;
        for (i = 0; juiz[i] != '\0'; i++){ // retirada de espaços
            if (juiz[i] != ' ')
            {
                cJuiz[c] = juiz[i];
                c++;
            }
        }
        cJuiz[c] = '\0';

        if(strcmp(prog, juiz) == 0){
            printf("Caso %d: Yes\n",k+1);
        }
        else{
            if(strcmp(cProg, cJuiz) == 0){
                printf("Caso %d: Output Format Error\n",k+1);
            }
            else{
                printf("Caso %d: Wrong Answer\n",k+1);
            }
        }
    }

    
    return 0;
}