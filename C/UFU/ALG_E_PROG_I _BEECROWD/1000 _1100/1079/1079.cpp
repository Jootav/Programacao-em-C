#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,i;
    double x1,x2,x3,media;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x1=x2=x3=0;
        scanf("%lf%lf%lf",&x1,&x2,&x3);
        media=((x1*2)+(x2*3)+(x3*5))/10;
        printf("%.1lf\n",media);
    }
    return 0;
}