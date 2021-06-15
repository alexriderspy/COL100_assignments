#include<stdio.h>

void swap(int arr[],int i1,int i2){
	int t;
	t=arr[i1];
	arr[i1]=arr[i2];
	arr[i2]=t;
}

void partition(int arr[],int start,int stop,int x){
	int rb=stop;
	int i;
	
	for(i=start;i<=stop;i++){
		if(arr[i]==x){
			break;		
		}
	}
	swap(arr,i,rb);
	i=start-1;
	for(int j=start;j<(stop);j++){
		if(arr[j]<=x){
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,stop,i+1);
	
}


int main(){
	int n,i=0,l=0;
	scanf("%d",&n);
	int arr[100],same[100];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	int x;
	scanf("%d",&x);

	partition(arr,0,n-1,x);	
	for(i=0;i<n;i++) printf("%d ",arr[i]);
}