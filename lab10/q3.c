#include<stdio.h>

int bsearch_new(int arr[],int n,int element){
	if(n==0) return -1;
	if(n==1){
		if(arr[0]==element) return 1;
		else return -1;
	}
	if(arr[n/2]==element) return 1;
	int i,j,new_arr[100];
	if(arr[n/2]<element){
		i=n/2+1,j=0;
		while(i<n){
			new_arr[j++]=arr[i++];
		}
		return bsearch_new(new_arr,(n-1-n/2),element);
	}else{
		i=0,j=0;
		while(i<n/2){
			new_arr[j++]=arr[i++];
		}
		return bsearch_new(new_arr,(n/2),element);
	}
	
}

int main(){
	int element,i,n;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	scanf("%d",&element);
	if(bsearch_new(arr,n,element)==1) printf("1");
	else printf("-1");
	return 0;
}

/*
Worst case analysis is when the element is not present in the array

this program:
f(n)=(n/2)*f(n/2)
n=>n/2=>n/4.. 
at depth k, one loop ->O(n/2^k) time
since depth of recursion tree is k,
	summation(n/2^k) of k over 0->log(n)
=> which gives O(n), so this is a O(n) algorithm

standard bsearch:
n=>n/2=>n/4.. O(n)=lg(n)
at each level, one comparison->O(1) time
no. of calls = depth k= log(n)
=>this is a O(logn) algorithm 

Thus there is a significant difference in the running time
*/
