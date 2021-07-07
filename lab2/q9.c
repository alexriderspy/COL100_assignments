#include<stdio.h>
#include<limits.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    if(n>INT_MAX || 10*n>INT_MAX) printf("Overflow");
    else{
        for(int i=1;i<=10;i++){
            printf("%lld x %d = %lld\n",n,i,n*i);
        }
    }
    return 0;
}