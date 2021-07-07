#include<stdio.h>

void main(){
    long long int n;
    scanf("%lld",&n);
    if(n<=2){
        printf("Invalid Input");
    }
    else{
        float angle=((n-2)*180)/(float)n;
        printf("%.0f\n",angle);


    }
}