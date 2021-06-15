#include<stdio.h>
#include<limits.h>
#include<float.h>

#define PI 3.14159265

//Cuboid:
//a=length,b=width,c=height
//cylinder:
//r_cyl=radius of cylinder,h=height of cylinder
//sphere:
//r_sph=radius of sphere
int main(){
    double a,b,c,r_cyl,r_sph,h;   
    scanf("%lf %lf %lf\n%lf %lf\n%lf",&a,&b,&c,&r_cyl,&h,&r_sph);
    if(a<0 || b<0 || c<0){
        printf("Invalid Input\n");

    }
    else{
        
        double v_cuboid=a*b*c;
        if(v_cuboid>DBL_MAX){
            printf("Overflow");
            
        }
        else
        printf("%.2f\n",v_cuboid);
            
    }
    if(r_cyl<0 || h<0){
        printf("Invalid Input\n");
    }
    else{
         double v_cyl=PI*r_cyl*r_cyl*h;
        if(v_cyl>DBL_MAX){
            printf("Overflow");
            
        }
        else
        printf("%.2f\n",v_cyl);

    }
    if(r_sph<0){
        printf("Invalid Input\n");
    }
    else{
        double v_sph=(4*PI*r_sph*r_sph*r_sph)/3;
        printf("%.2f",v_sph);
    }

}
