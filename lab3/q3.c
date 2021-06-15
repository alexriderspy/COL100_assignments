#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	float temp;
	float sum=0;
	for(int i=1;i<=n;i++){
		scanf("%f",&temp);
		sum+=temp;
	}
	printf("%.1f",sum);
	return 0;
}
