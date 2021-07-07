#include<stdio.h>
int main(){
    int posmin,posmax,n,min=9999,i,max=-9999;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
        if(arr[i]<min){
            min=arr[i];posmin=i;
        }
        if(arr[i]>max){
            max=arr[i];posmax=i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(j==posmax) printf("%d ",arr[posmin]);
        else if(j==posmin) printf("%d ",arr[posmax]);
        else
        printf("%d ",arr[j]);
    }
    

}