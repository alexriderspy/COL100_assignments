#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void main(){
    long long int x,y;
    scanf("%lld %lld",&x,&y);
    long long int sum=x+y;
    long long int diff=x-y;
    long long int prod=x*y;
    double quo=(double)x/y;
    long long int rem;
    
    if(x>INT_MAX || y>INT_MAX ){
        printf("Overflow");
        exit(0);
    }
    if ( x<INT_MIN || y<INT_MIN)
    {
        printf("Underflow");
        exit(0);
    }
    if(sum>INT_MAX || sum<INT_MIN) {
        printf("Overflow");
    }    
    else{
        printf("The sum is %lld\n",sum);}
    if(diff>INT_MAX || diff<INT_MIN) {
        printf("Overflow");
    }    
    else{

    printf("The difference is %lld\n",diff);}
    if(prod>INT_MAX || prod<INT_MIN) {
        printf("Overflow");
    }    
    else{
        printf("The product is %lld\n",prod);
    }

    if(y!=0) {
        rem=x%y;

        printf("The quotient is %f\n",quo);
        printf("The remainder is %lld\n",rem);
    }
    else{
        printf("Division by 0 is not valid.");
    }

}
