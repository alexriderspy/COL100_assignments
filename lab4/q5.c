#include<stdio.h>

int main(){
    int a,b,num=0,temp,sm,lm;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        for(int j=a;j<=i;j++){
            
            if(i%j==0){
                num++;
            }
        }
    }
    printf("%d",num);
}