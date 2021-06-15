#include<stdio.h>

int main(){
	int max,a,b,flag=0,i,min;
	scanf("%d %d",&a,&b);
	while(1){
		min=a<b?a:b;
		max=a>b?a:b;
		if(max%min==0){
			break;
		}
		a=max%min;
		b=min;
	}
	printf("%d",min);
	return 0;
}
