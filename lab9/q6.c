#include<stdio.h>
#include<stdlib.h>
int power(int n,int exp){
	int prod=1;
	while(exp--) prod*=n;
	return prod;
}
//32 bit implementation  

int to_integer(char A[32], int n, int start,int stop){
	if(start==stop ) {
		if(A[start]-'0'< 0 || A[start]-'0' > 9) {
			printf("Invalid string"); exit(0);
		}
	}
	if(start==stop) return (A[start]-'0')*(power(10,n-1-start));
	
	return to_integer(A,n,start,(start+stop)/2) + to_integer(A,n,(start+stop)/2+1,stop);
}

int myatoi(char A[32],int length){
	
	return to_integer(A,length,0,length-1);
}

int main(){
	char str[32];
	int n;
	scanf("%d",&n);
	fflush(stdout);
	scanf("%s",str);
	
	printf("%d",myatoi(str,n));
}
