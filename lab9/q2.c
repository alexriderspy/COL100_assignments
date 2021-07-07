#include<stdio.h>
//O(logn)
int peakIndex(int A[100],int n){
	int l=0,r=n,mid;
	while(l<r){
		mid=(l+r+1)>>1;
		if(mid>=1 && mid<=n-1 && A[mid]>A[mid-1] && A[mid]>A[mid+1]) return mid;
		if(A[mid]<A[mid-1]) r=mid-1;
		else if(A[mid]<A[mid+1]) l=mid;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("%d\n",peakIndex(arr,n));
}
