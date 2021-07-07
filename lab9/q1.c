#include<stdio.h>

//aliter:
//calculate rightsum 1 to n-1, leftsum=0
//loop i =1: n-1,j=0
// leftsum+=A[j], rightsum-=A[i]
//leftsum==rightsum return i, else return -1

int findElement(int A[100],int n){
	int pref[100];
	pref[0]=A[0];
	for(int i=1;i<n ;i++){
		pref[i]=pref[i-1]+A[i];
	}
	for(int i=1;i<n;i++){
		if(pref[i-1]==(pref[n-1]-pref[i])) return 1;
	}
	return 0;
}
int main(){
	int arr[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("%d",findElement(arr,n))<<'\n';
}
