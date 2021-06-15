#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);
    if(n%100 ==0){
        if(n%400==0) printf("Leap year");
        else printf("Not a leap year");
    }
    else
    {
        if(n%4==0) printf("Leap year");
        else printf("Not a leap year");
    }
    return 0;
}