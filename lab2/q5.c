#include<stdio.h>

int main(){
    char ch;
    double r,area,a,b,h;
    double PI =3.14159265;    
    scanf("%c",&ch);
    switch(ch)
    {
        case 'C':
        scanf("%lf",&r);
        if(r<0) 
        {
            printf("Invalid Input");
            return 0;
        }
        area=r*PI*r;
        printf("The area is %.2lf",area);
        break;
        
        case 'R':
        scanf("%lf %lf",&a,&b);
        if(a<0 || b<0) 
        {
            printf("Invalid Input");
            return 0;
        }

        area=a*b;
        printf("The area is %.2lf",area);
        break;

        case 'T':
        scanf("%lf %lf",&b,&h);
        if(b<0 || h<0) 
        {
            printf("Invalid Input");
            return 0;
        }
        area=(b*h)*0.5;
        printf("The area is %.2lf",area);
        break;
        
        default:
        printf("Invalid Input"); break;
    }
    return 0;
}
