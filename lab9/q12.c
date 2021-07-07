#include<stdio.h>

void pattern(int n,int c,int m){
	int i,j;
	
	if(n==1) {
		for(i=1;i<=m;i++) printf(" ");
		for(i=1;i<=c;i++) printf(" ");
		printf("*\n");
		return;
	}
	
	pattern (n/2,c,m);
	for(i=1;i<=m;i++) printf(" ");
	for(j=1;j<=c;j++) printf(" ");
	for(i=1;i<=n;i++) {
		
		printf("* ");	
	}
	printf("\n");
	
	pattern(n/2,c+n,m);	
	
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	pattern(n,0,m);
}
