#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void PosOuNeg (int x){
    if(x<0){
        printf("NEGATIVE\n");
    }
    else{
        printf("POSITIVE\n");
    }
}
int main() {
    int n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x==0){
            printf("NULL\n");
        }
        else{
            if(x%2==0){
                printf("EVEN ");
                PosOuNeg(x);
            }
            else{
                printf("ODD ");
                PosOuNeg(x);
            }
        }
    }
    return 0;
}