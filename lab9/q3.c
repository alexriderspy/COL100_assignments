#include<stdio.h>

int main(){
	int tmp,sum,i,l=0;
	scanf("%d",&sum);
	int n;
	scanf("%d",&n);
	int cnt[50][50];
	
	for(i=0;i<50;i++) cnt[i][0]=0;
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
	
		cnt[tmp][0]++; 
		if(cnt[tmp][0]==1) cnt[tmp][1]=i;
		if(cnt[tmp][0]==2) cnt[tmp][2]=i;
	}
	int pos1,pos2;
	for(i=1;i<=sum;i++){
		if( i!= sum-i && (cnt[i][0]>0) && (cnt[sum-i][0]>0)){
			pos1=cnt[i][1],pos2=cnt[sum-i][1];
			break;
		}else if(i==sum-i && cnt[i][0]>1) {
			pos1=cnt[i][1],pos2=cnt[i][2];
			break;
		}
	}
	
	printf("%d %d\n",pos1,pos2);

}
