#include<stdio.h>

int main(){
    int smin,arr[100],n,pos=0,min=99999;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
       
        if(arr[i]<min){
            min=arr[i];pos=i;
        }
    }
    smin=99999;
    for(int i=0;i<n;i++){
        if(i==pos){
            continue;
        }
        smin=arr[i]<smin?arr[i]:smin;
    }
    printf("%d",smin);
}