#include<stdio.h>
int main(){
    int n;
    int arr[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                printf("Not Symmetric");return 0;
            }
        }
    }
    printf("Symmetric");
    return 0;
}