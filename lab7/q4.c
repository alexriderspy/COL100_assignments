#include<stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(i==0){

            x=t;
        }
        else{
            x^=t;
        }
    }
    printf("%d",x);
}