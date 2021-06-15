#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(){
    
    long long int n;
    scanf("%lld",&n);
    if(n>INT_MAX){
        printf("Overflow");
        exit(0);
    }
    int temp;
    temp=n;
    int newnum=0;
    while(n){
        int rem=n%10;
        newnum=newnum*10+rem;
        n=n/10;
    }
    if(newnum==temp){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
