#include<stdio.h>
int main(){
    int n,l=1,arr[100],t,prev;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
        scanf("%d",&arr[0]);
            
            t=arr[0];
            prev=t;
        }
        else{
        scanf("%d",&t);
        if(t==prev){
            continue;
        }else{
            arr[l++]=t;
        }
        }
        prev=t;
    }
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }

}