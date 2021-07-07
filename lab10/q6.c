#include<stdio.h>
#include<stdlib.h>

void swap(int arr[],int i1,int i2){
	int t;
	t=arr[i1];
	arr[i1]=arr[i2];
	arr[i2]=t;
}

void partition(int arr[],int start,int stop,int x,int indices[2]){
	int rb=stop;
	int i,l=0;
	int same[100];
	for(i=start;i<=stop;i++){
		if(arr[i]==x){
			same[l++]=i;		
		}
	}
	for(int m=0;m<l;m++){	
		swap(arr,same[m],rb--);
	}
	i=start-1;
	for(int j=start;j<(stop+1-l);j++){
		if(arr[j]<=x){
			i++;
			swap(arr,i,j);
		}
	}
	int index1=i+1;
	int index2=i+l;
	for(int m=stop;m>=(stop+1-l);m--){
		swap(arr,m,i+1);i++;
	}
	indices[0]=index1;
	indices[1]=index2;
}

void quicksort(int arr[],int start,int stop){
	
	if(start>=stop) return;

	int pivot_index=start+rand()%(stop-start);
    
	int indices[2];
	partition(arr,start,stop,arr[pivot_index],indices);

	quicksort(arr,start,indices[0]-1);
	quicksort(arr,indices[1]+1,stop);
}

int main(){
	int index,pivot,i,n;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	return 0;
}
