#include<stdio.h>
int main(){
    int i,j,n1,n2,k,l=0;
    int arr1[50],arr2[50],arr3[50],arr4[50];
    scanf("%d", &n1);
    for(int i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    for(int i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
    }
    i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];
        }
        else{
            arr4[l++]=arr2[j++];
        }
    }
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }
    printf("%d\n",k);
    for(int i=0;i<k;i++){
        printf("%d ", arr3[i]);
    }
    printf("\n");
    printf("%d\n",l);
    for(int i=0;i<l;i++){
        printf("%d ", arr4[i]);
    }

}