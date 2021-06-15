#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=n;k>=(i+1);k--){
            printf("%d",k);
        }
        printf("%d",i);
        for(int k=i+1;k<=n;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}