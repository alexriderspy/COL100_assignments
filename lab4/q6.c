#include<stdio.h>

int main(){
    int a,b,num=0,temp,sm,lm;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        for(int j=a;j<=i;j++){
            
            lm=i;
            sm=j;
            while(lm%sm!=0){
                temp=lm;
                lm=sm;
                sm=temp%sm;
                if(lm<sm){
                    temp=lm;
                    lm=sm;
                    sm=temp;
                }
            }
            if(sm!=1) num++;
        }
    }
    printf("%d",num);
}