#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x,i,r,c,s,quantia;
    double total,percentual;
    char tipo;
    x=i=r=c=s=quantia=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        quantia=0;
        scanf("%d %c",&quantia,&tipo);
        if(tipo=='C' || tipo=='c'){
            c=c+quantia;
        } 
        else if(tipo=='R' || tipo=='r'){
            r=r+quantia;
        }
        else{
            s=s+quantia;
        }
    }
    total=r+c+s;
    printf("Total: %.0lf cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    percentual=(c/total)*100;
    printf("Percentual de coelhos: %.2lf %%\n",percentual);
    percentual=(r/total)*100;
    printf("Percentual de ratos: %.2lf %%\n",percentual);
    percentual=(s/total)*100;
    printf("Percentual de sapos: %.2lf %%\n",percentual);
    return 0;
}