#include<stdio.h>

int main(){
    int fn=0,sum=0,n,x;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        x=i;
        sum=0;
        while(x){
            sum+=x%10;
            x/=10;
        }
        for(int j=1;j<=i;j++)
        {
            if(j%sum==0){
                fn++;
            }
        }
}
    printf("%d",fn);
    return 0;
}