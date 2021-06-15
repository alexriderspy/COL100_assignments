#include<stdio.h>
int main(){
    int n,k,i;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=n-k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<(n-k);j++){
        printf("%d ",arr[j]);
    }

}