#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int f_mdc (int num, int den){
    int resto, aux;
    if (den > num){
        aux=den;
        den=num;
        num=aux;
    }
    while((num%den)!=0){
        resto=num%den;
        num=den;    
        den=resto;
    }
    return den;
}

int main() {

    int i, n_operacoes, mdc;
    int n1, n2, d1, d2, vet_resp_num[10000], vet_resp_den[10000];
    char operador;

    for(i=0; i<10000; i++){
        vet_resp_den[i]=0;
        vet_resp_num[i]=0;
    }
    mdc=0;

    scanf("%d", &n_operacoes);
    if(n_operacoes<0){
        return 0;
    }
    
    i=0;
    while(i<n_operacoes){
        scanf("%d%d", &n1, &d1);
        scanf(" %c", &operador);
        scanf("%d%d", &n2, &d2);
        if(n1 < 0 || d1 < 0 || n2 < 0 || d2 < 0){
            return 0;
        }

        if(operador == '+'){
            vet_resp_num[i]=((n1*d2)+(n2*d1));
            vet_resp_den[i]=(d1*d2);
        }
        else if(operador == '-'){
            vet_resp_num[i]=((n1*d2)-(n2*d1));
            vet_resp_den[i]=(d1*d2);
        }
        else if (operador == '*'){
            vet_resp_num[i]=(n1*n2);
            vet_resp_den[i]=(d1*d2);
        }
        else{
            vet_resp_num[i]=(n1*d2);
            vet_resp_den[i]=(n2*d1);
        }
        i++;
    }
    for(i=0; i < n_operacoes; i++){
        printf("%d/%d", vet_resp_num[i], vet_resp_den[i]);
        printf(" = ");
        mdc=f_mdc(vet_resp_num[i], vet_resp_den[i]);
        vet_resp_num[i]=vet_resp_num[i]/mdc;
        vet_resp_den[i]=vet_resp_den[i]/mdc;

        if(vet_resp_den[i] < 0){
        vet_resp_num[i] *= -1;
        vet_resp_den[i] *= -1;
        }

        printf("%d/%d\n", vet_resp_num[i], vet_resp_den[i]);
    }
    return 0;
}