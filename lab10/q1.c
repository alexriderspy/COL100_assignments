#include<stdio.h>

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
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("%d ",minIndex(arr,0,n-1));
}

/*
Say arr has size n.
1 call 		            	minIndex(arr,0,n-1) 
2 calls	        minIndex(arr,0,(n-1)/2) minIndex(arr,(n-1)/2+1,n-1)\\  
4 calls minIndex(arr,0,(n-1)/4) and so on
 
thus for a recursion tree we will have 2^{k+1}-1 calls for depth=k
depth=k=log(n)

Thus the total number of calls is approximately 2n-1

*/
