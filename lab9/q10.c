#include<stdio.h>

int main(){
	int k,m,n,i,j,d;
	scanf("%d %d", &m, &n);
	int arr[100][100];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(k=0;k<m;k++){
		i=k,j=0;
		while(i>=0 && j<=n-1){
			printf("%d ",arr[i][j]);
			i--,j++;
		}
		printf("\n");
	}
	for(k=1;k<n;k++){
		i=m-1,j=k;
		while(j<=n-1){
			printf("%d ",arr[i][j]);
			i--,j++;
		}
		printf("\n");
	}
	
	
}
