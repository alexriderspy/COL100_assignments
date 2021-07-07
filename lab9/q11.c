#include<stdio.h>
#include<limits.h>

int min(int a, int b){
	return a<b?a:b;
}
int main(){
	int i,j,n;
	scanf("%d",&n);
	int arr[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr[i][j]=INT_MAX;
		}
	}	
	
	int sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			scanf("%d",&arr[i][j]);
		}
	}	
	for(i=1;i<n;i++){
		for(j=0;j<=i;j++){
			if(j!=0) arr[i][j]+=min(arr[i-1][j],arr[i-1][j-1]);
			else arr[i][j]+=arr[i-1][j];
		}
	}
	sum=INT_MAX;
	for(i=0;i<n;i++){
		sum=min(sum,arr[n-1][i]);
	}
	printf("%d",sum);
}
