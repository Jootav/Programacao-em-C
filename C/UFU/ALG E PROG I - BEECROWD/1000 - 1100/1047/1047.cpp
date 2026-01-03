#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int hi,mi,hf,mf,t1,t2;
    hi=mi=hf=mf=t1=t2=0;
    scanf("%d%d%d%d",&hi,&mi,&hf,&mf);

    if(hi<hf){ // MESMO DIA 7:53 8:20
        if(mi<mf){
            t1=hf-hi;
            t2=mf-mi;
        }
        else{
            t1=(hf-hi)-1;
            t2=(60-mi)+mf;
        }
    }
    else if(hi>hf){ // UM DIA PRO OUTRO
        if(mi<mf){
            t1=(24-hi)+hf;
            t2=mf-mi;
        }
        else{
            t1=((24-hi)+hf)-1;
            t2=(60-mi)+mf;
        }
    }
    else{ // 24 HORAS
        if(mf==mi){
            t1=24;
            t2=0;
        }
        else if(mf>mi){
            t1=0;
            t2=mf-mi;
        }
        else{ //mf<mi
            t1=23;
            t2=(60-mi)+mf;
        }
    }
    

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t1,t2);
    return 0;
}