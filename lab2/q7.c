#include<stdio.h>
#include<limits.h>

int main(){
    long long int n;      
    scanf("%lld",&n);
    if(n<0) printf("Invalid Input");
    else if(n==0) printf(0);
    else{
    long long int fact=1;
    for(long long int i=2;i<=n;i++){
        fact*=i;
    }
    if(fact>INT_MAX) printf("Overflow");
    else
    printf("%lld",fact);
    }
    return 0;
}