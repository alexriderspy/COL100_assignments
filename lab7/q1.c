#include<stdio.h>

int main(){
    int t,n,b;
    scanf("%d %d",&n,&b);
    int arr1[100],arr2[100];
    for(int i=0;i<n;i++){
        scanf("%d", &arr1[i]);
        arr2[i]=arr1[i];
    }
    for(int i=0;i<n;i++){
        t=arr1[i];
        for(int j=i+1;j<n;j++){
            if(t+arr2[j]==b){
                printf("%d %d\n", arr1[i], arr2[j]);
            }
        }
    }
    return 0;

}