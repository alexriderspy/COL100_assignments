#include<stdio.h>
#include<math.h>
int prime(int a){
    if(a<=1) return -1;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return -1;
    }   
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        if(prime(n-2)){
            printf("true");return 0;
        }
        else{
            printf("false");return 0;
        }
    }
    for(int i=2;i<n;i++){
        if(prime(i)==-1 || prime(n-i)==-1){
            continue;
        }
        printf("true");return 0;
    }
    printf("false");
    return 0;
}