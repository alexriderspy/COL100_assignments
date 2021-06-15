#include<stdio.h>
#include<stdbool.h>
//want to check which path will take me to 42
bool candygame(int n){
	
	if(n==42) return true;
	if(n<42) return false;
	if(n%2==0) {
		if(candygame(n/2)) return true;
		
	}
	if(n%3==0 || n%4==0){
		if(candygame(n-(n%10 * n/10))) return true;
		
	}
	if(n%5==0){
		if(candygame(n-42)) return true;
	}
	return false;
}
int main(){
	int n;
	scanf("%d",&n);
	if(candygame(n)) printf("True");
	else printf("False");
}
