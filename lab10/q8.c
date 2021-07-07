#include<stdio.h>

void merge(int arr[],int lb,int mid,int ub){
	int i,j,k,l;
	i=lb,j=mid+1,k=0;
	int c[100];
	while(i<=mid && j<=ub){
		if(arr[i]<=arr[j]) c[k++]=arr[i++];
		else c[k++]=arr[j++];
	}
	while(i<=mid){
		c[k++]=arr[i++];
	}
	while(j<=ub){
		c[k++]=arr[j++];
	}
	k=0;
	for(l=lb;l<=ub;l++){
		arr[l]=c[k++];
	}
}

void mergesort(int arr[],int lb,int ub){
	if(lb>=ub) return;
	mergesort(arr,lb,(lb+ub)/2);
	mergesort(arr,(lb+ub)/2+1,ub);
	merge(arr,lb,(lb+ub)/2,ub);
}

//here traversing depth time = O(logn)
//time spent at each level->
//each level has 2^i nodes 
//and time taken at each node is O(n/2^i)
//thus net running tc=O(n) at each level, 
//hence total tc=O(nlogn)


int main(){
	int i,n;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	mergesort(arr,0,n-1);
	for(i=0;i<n;i++) printf("%d ",arr[i]);
}
