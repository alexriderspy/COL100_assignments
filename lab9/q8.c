#include<stdio.h>

void swap(float arr[100][100],int i1,int j1,int i2, int j2){
	float t;
	t=arr[i1][j1];
	arr[i1][j1]=arr[i2][j2];
	arr[i2][j2]=t;
}

float determinant(float arr[100][100], int n){
	
	if(n==2){
		return (arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
	}
	float det=0.0;
	int h=0,l=0;
	float t[100][100];

	for(int g=0;g<n;g++){

		for(int r=1;r<n;r++){
			if(r==0) continue;
			h=0;
			for(int c=0;c<n;c++){
				if(c==g) continue;
				t[l][h]=arr[r][c];
				h++;
			}
			l++;
		}
		det+=((g%2?-1:1)*(arr[0][g])*determinant(t,n-1));
		
	}
	return det;
}
int main(){
	int n;
	scanf("%d",&n);
	float arr[100][100];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%f",&arr[i][j]);
			
	float C[100][100],tmp[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int l=0,h=0;
			for(int r=0;r<n;r++){
				if(r==i) continue;
				h=0;
				for(int c=0;c<n;c++){
					if(c==j) continue;
					tmp[l][h]=arr[r][c];
					h++;
				}
				l++;
			}
			
			C[i][j]=((i+j)%2?-1:1)*determinant(tmp,n-1);
			if(C[i][j]==0) C[i][j]=0;	//this step is to ensure
			//that my 0.00 is positive and not -0.00	
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(C,i,j,j,i);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			C[i][j]/=determinant(arr,n);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%0.2f   ", C[i][j]);
		}
		printf("\n");
	}

}
