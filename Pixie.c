#include <stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
    double n,nifeSize,R;
    int T,i;
    scanf("%d",&T);
    if(T<=100){
        for(i=1;i<=T;i++){
        scanf("%lf",&n);
        if(n<=1000){
            R=n/(2*M_PI);
            nifeSize=R*2;
            printf("Case %d: %.3f\n",i,nifeSize);
        }
    }
    }
    return 0;
}
