#include<stdio.h>
int main(){
    int T,x,d,i;
    scanf("%d",&T);
    if(T>0 && T<100){
        for(i=1;i<=T;i++){
            scanf("%d %d",&x,&d);
            if(x>=0 && x<=50){
                if(d>0 && d<=50){
                    if(x<=5){
                        printf("Yes! The ant is Alive.\n");
                    }
                    else{
                        printf("Sorry !the ant is nomore.\n");
                    }
                }
            }
        }
    }

}
