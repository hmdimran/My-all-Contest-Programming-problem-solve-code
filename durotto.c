#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    double x1,y1,x2,y2,a,b,c;
    scanf("%d",&T);
    if(T<=100){
        for(i=1;i<=T;i++){
            scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
            a = pow((y1-x1),2);
            b = pow((y2-x2),2);
            c = sqrt(a+b);
            printf("Case %d: %.4lf\n",i,c);



        }
    }
    return 0;
}
