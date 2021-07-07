#include<stdio.h>

int solve(int hour, int min,int time){
    if(hour>=24 || hour<0 || min<0 || min>=60){
        return -1;
    }
    return (hour*60+min);
}
void main(){
    int time;
    scanf("%d",&time);
    int min=time%100;
    
    int hour=time/(100);
    int result=solve(hour,min,time);
   
    if(result==-1){
        printf("Invalid Input");
    }
    else{
        printf("%d",result);
    }
}