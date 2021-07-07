#include<stdio.h>

int main(){
	int i,j,k,n,m;
	scanf("%d",&n);
	int a[100],b[100],c[100];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	i=0,j=0,k=0;
	while(i<n && j<m){
		if(a[i]<=b[j]) c[k++]=a[i++];
		else c[k++]=b[j++];
	}
	while(i<n){
		c[k++]=a[i++];
	}
	while(j<m){
		c[k++]=b[j++];
	}
	for(k=0;k<n+m;k++) printf("%d ",c[k]);
}

//O(n+m) tc
