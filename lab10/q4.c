#include<stdio.h>

int ternarySearch(int arr[],int start,int end,int element){
	if(start>end) {
		return -1;
	}
	if(start==end) {
		if(arr[start]==element)
		return 1;	
		else 
		return -1;
	}
	int fp=(2*start+end+1)/3;
	int lp=(start+2*end+2)/3;
	
	if(element<=arr[fp]) return ternarySearch(arr,start,fp,element);
	else if(element<=arr[lp]) return ternarySearch(arr,fp+1,lp,element);
	else return ternarySearch(arr,lp+1,end,element);
}

int main(){
	int element,i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	scanf("%d",&element);
	if(ternarySearch(arr,0,n-1,element)==1) printf("1");
	else printf("-1");
	return 0;
}
