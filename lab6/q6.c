#include<stdio.h>
int main(){
    int n,target,cnt=0;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target) cnt++;
    }
    printf("%d",cnt);

}