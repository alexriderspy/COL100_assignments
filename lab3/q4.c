#include<stdio.h>

int main(){
	float pi=3.14,x;
	
	int sign=1;
	scanf("%f",&x);
	x=(pi*x)/180;
	float cos=1,power=1,fact=1,term;
	for(int i=1;i<=6;i++){
		
		sign*=(-1);
		power=power*x*x;
		fact*=(2*i-1)*(2*i);
		term=sign*(power/fact);
		
		cos+=term;
	}
	printf("%.3f",cos);
	return 0;
}
		
		
