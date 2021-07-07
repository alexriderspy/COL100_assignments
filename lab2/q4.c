#include<stdio.h>
#include<float.h>

int main(){
    long long int x,n;
    scanf("%lld %lld",&x,&n);
    double result=1;
    
    if(n>=0){
        while(n){
            result*=x;n--;
        }
    if(result>DBL_MAX) printf("Overflow");
    else printf("%.0f",result);   

    }
    else{
        while(n<0){
            result/=x;
            n++;
        }
    if(result>DBL_MAX) printf("Overflow");
    else printf("%.2f",result);       //print upto 2 decimal places if negative input
    

    }
   return 0;
    
}
