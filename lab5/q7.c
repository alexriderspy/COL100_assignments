#include<stdio.h>

int main(){
    int ans,in,k,m,y,D,C;
    scanf("%d %d %d",&k,&m,&y);
    int f;
    C=y/100;
    D=y%100;
    f=k+((13*m-1)/5)+D+(D/4)+(C/4)-2*C;
    
    ans=f%7;
    ans=(ans<0)?(7+ans):ans;
    printf("%d",ans);
}