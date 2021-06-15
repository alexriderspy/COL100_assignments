#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    float g=n/2;  //guessed number
    while((g*g-n)>0.001||(g*g-n)<-0.001){
        g=(g+(n/g))/2.0;
    }
    printf("%f",g);
}