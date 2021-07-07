#include<stdio.h>

int main(){
    int x,newnum=0,flag=0;
    scanf("%d",&x);
    if(x<=999 || x>=10000){
        printf("Invalid Input");
    }
    else{
        for(int i=1;i<=4;i++){
        int rem=x%10;
        x=x/10;
        newnum=newnum*10+rem;
    }
    printf("%d\n",newnum);
    if(newnum<=999 || newnum>=10000){
        printf("Invalid");
    }
    else{
        printf("Valid");
    }
    }

}