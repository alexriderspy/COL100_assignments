#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a==0){
        printf("Not a Quadratic Equation");
    }
    else
    {
        float D=(b*b-4*a*c);
        if(D>0){
            float r1=(-b+sqrt(D))/(2*a);
            float r2=(-b-sqrt(D))/(2*a);
            printf("%.3f %.3f",r1,r2);
        }
        else if (D==0){
            float r=-b/(2*a);
            printf("%.3f",r);
        }
        else{
            printf("No Real Roots");
        }
    }
}