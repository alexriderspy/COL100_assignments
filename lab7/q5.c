#include<stdio.h>
int main(){
    int t,n,c=0;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        c=0;
        int t=arr[i];
        if(t==0){
            printf("true");return 0;
        }
        for(int j=i+1;j<n;j++){
            t+=arr[j];
            if(t==0){
                printf("true");return 0;
            }
        }
    }
    printf("false");return 0;
}