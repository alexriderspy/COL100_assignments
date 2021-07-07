#include<stdio.h>
#include<string.h>

int possiblePal(char str[]){
	int cnt[26];
	for(int i=0;i<26;i++) cnt[i]=0;
	int n=strlen(str);
	for(int i=0;i<n;i++) {
		int pos=str[i]-'a'+1;
		cnt[pos]++; 
	}
	int flag=0;
		for(int i=0;i<26;i++){
			if(cnt[i]%2) flag++;
			if(flag>=2) return -1;
		}
		
		return 1;
	}
int main(){
	
	char str[100];
	scanf("%s",str);
	if(possiblePal(str)==1) printf("YES");
	else printf("NO");	
}
