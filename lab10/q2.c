#include<stdio.h>
#include<limits.h>

int minIndex(int arr[],int start,int end){
	if(start==end) return start;
	int left=minIndex(arr,start,(start+end)/2);
	int right=minIndex(arr,(start+end)/2+1,end);
	if(arr[left] < arr[right]){
		return left;
	}
	else{
		return right;
	}
}
int sminIndex(int arr[],int start,int end){
	if(start==end) return start;
	int left=minIndex(arr,start,(start+end)/2);
	int right=minIndex(arr,(start+end)/2+1,end);
	if(arr[left] < arr[right]){
		return left;
	}
	else{
		return right;
	}
}


int main(){
	int i,n;
	scanf("%d",&n);
	int arr[100],min_index,smin_index;
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	min_index=minIndex(arr,0,n-1);
	printf("%d ",min_index);
	arr[min_index]=INT_MAX;
	smin_index=sminIndex(arr,0,n-1);
	printf("%d \n",smin_index);
	return 0;
}

