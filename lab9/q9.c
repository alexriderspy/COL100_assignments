#include<stdio.h>

void swap(int arr[100][100],int i1,int j1,int i2, int j2){
	int t;
	t=arr[i1][j1];
	arr[i1][j1]=arr[i2][j2];
	arr[i2][j2]=t;
}

int main(){
	int j,i,n;
	scanf("%d",&n);
	int arr[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d", &arr[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			swap(arr,i,j,j,i);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n/2;j++){
			swap(arr,i,j,i,n-1-j);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", arr[i][j]);
			printf("\n");
	}
	
}
