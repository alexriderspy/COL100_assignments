#include<stdio.h>

int main(){
	int n,d,j,sum,num_of_dig;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		j=i;
		sum=0;
		num_of_dig=0;
		
		while(j){
			num_of_dig++;
			j/=10;	
		}
		j=i;
		while(j){
			d=j%10;
			j/=10;
			switch (num_of_dig)
			{
			case 1:
				sum+=d;
				break;
			case 2:
				sum+=d*d;
				break;
			case 3:
				sum+=d*d*d;
				break;
			case 4:
				sum+=d*d*d*d;
				break;
			case 5:
				sum+=d*d*d*d*d;
				break;
			}
		}
		if(sum==i){
			printf("%d ",sum);
		}
	}
	return 0;
}
