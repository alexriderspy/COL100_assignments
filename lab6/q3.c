#include<stdio.h>
int main(){
    int cnt=0,n,pos;
    scanf("%d",&n);
  /* aliter 
   for(int i=0;i<=31;i++){
        pos=1<<i;
        if(pos&n) cnt++;
    }
    printf("%d",cnt);*/
    cnt=0;
    while(n){
        cnt++;
        n=n&(n-1);
    }
    printf("%d",cnt);

}