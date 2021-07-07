#include<stdio.h>
int main(){
    int c,posa,posb,a,b,cnt=0;
    scanf("%d %d",&a,&b);
  /*  for(int i=0;i<=31;i++){
        posa=((a&(1<<i))>>i);
        posb=((b&(1<<i))>>i);
        if(posa !=posb){
            cnt++;
        }
    }*/
    c=a^b;
    while(c){
        cnt++;
        c=c&(c-1);

    }
    printf("%d",cnt);

}