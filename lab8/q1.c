#include<stdio.h>
#include<stdbool.h>

bool isSorted(int arr[], int n){
    if(arr[1]>arr[0])
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    else{
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            return false;
        }
    }

    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    isSorted(a,n)? printf("true"):printf("false");
}