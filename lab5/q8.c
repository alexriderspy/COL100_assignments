#include<stdio.h>

int main(){
    int n,a,b,max,smax;
    scanf("%d",&n);
    scanf("%d",&a);
    max=a;
    scanf("%d",&b); n-=2;
    if(b<a) {
        smax=b;
    }
    else if(b>a){
        smax=a;
        max=b;
    }
    else{
        max=a;
        smax=-1;
    }
    while(n>0){
        
        scanf("%d",&a);n--;
        if(a>max){
            smax=max;
            max=a;
            
        }
        else if(a>smax && a<max){
            smax=a;
        }
        
        
    }
    if(smax==-1) printf("Second largest number does not exist.");
    else{
        printf("%d",smax);
    }
}