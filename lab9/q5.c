#include<stdio.h>
#include<limits.h>
int maxProfit(int prices[100],int n){
	int maxprofit=0,min_price=INT_MAX;
	for(int i=0;i<n;i++){
		if(prices[i]<min_price){
			min_price=prices[i];
		}
		else if(maxprofit<(prices[i]-min_price)){
			maxprofit=prices[i]-min_price;
		}
	}
	return maxprofit;
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("%d",maxProfit(arr,n));
}
