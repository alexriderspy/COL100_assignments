#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    if(n<0) printf("Invalid input");
    else if(n<=1) printf("%lld",n);
    else {
        long long int sum;  
        long long int a=0,b=1;
        for( long long int i=3;i<=n+1;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("%lld",sum);
    }
    return 0;
}