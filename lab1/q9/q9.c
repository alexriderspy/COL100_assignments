#include<stdio.h>
#include<stdlib.h>
#include<float.h>

float bill(float price, float discount, float tax){
    if(price<=0 || discount<0 ||discount>100 || tax<0 || tax>100){

        return -1;
    }
    float discounted_price=price-((discount*price)/100);
    float final_price=discounted_price+((tax*discounted_price)/100);
    
    return final_price;
}
void main(){
    float price,discount,tax;
    scanf("%f %f %f",&price,&discount,&tax);
    float bill_a=bill(price,discount,tax);

    if(bill_a==-1){
        printf("Invalid Input");
        exit(0);
    }
    if(bill_a >DBL_MAX){
        printf("Overflow");
        exit(0);
    }
    scanf("%f %f %f",&price,&discount,&tax);

    float bill_b=bill(price,discount,tax);
    if(bill_b==-1){
        printf("Invalid Input");
        exit(0);
    }
    if(bill_b >DBL_MAX){
        printf("Overflow");
        exit(0);
    }

    printf("%.2f",bill_a+bill_b);

}