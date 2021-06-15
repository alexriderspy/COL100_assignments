#include<stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    int *p;
    p=(unsigned int*)&(a);
    //floating point number will be stored as 32 bit memory
    
    (*p)^=(1<<31);
    printf("%0.02f ",a);

}