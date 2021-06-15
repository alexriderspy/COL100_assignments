#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    float a,d,term;
    int t;
    scanf("%f %f",&a,&d);
    while(n){
        term=a;
	if(term>=0)
	{
		t=term+0.5;
	}
	else{
		t=term-0.5;
	}
		//printf("%d ",t);
	int lb=term;
        //printf("%d ",lb);
        if((int)term==t)
        	printf("%.0f ",term);
	else
		printf("%.1f ",term);
        a+=d;
        n--; 
    }
    return 0;
}
