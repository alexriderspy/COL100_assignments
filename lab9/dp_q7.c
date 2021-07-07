#include<stdio.h>
#include<stdbool.h>
//want to check which path will take me to 42

bool candygame(int n, int dp[1000]){
	
	if(dp[n]!=-1) return dp[n];
	
	dp[n]=0;
	if(n%2==0) {
		if(candygame(n/2,dp)) dp[n]=1;
		
	}
	if(n%3==0 || n%4==0){
		if(candygame(n-(n%10 * n/10),dp)) dp[n]=1;
		
	}
	if(n%5==0){
		if(candygame(n-42,dp)) dp[n]=1;
	}
	return dp[n];
}
int main(){
	int i,n;
	scanf("%d",&n);
	int dp[1000];
	for(i=0;i<42;i++){
		dp[i]=0;
	}
	for(i=43;i<=n;i++){
		dp[i]=-1;
	}
	
	dp[42]=1;
	if(candygame(n,dp)) printf("True");
	else printf("False");
}
