#include<stdio.h>

int main(){
	int n=17;
	int sum=0;
	int term=((100/n)+1)*17;

	while(term<=999){
		
		sum+=term;
		term+=17;
	}
	printf("%d",sum);
	return 0;
}
