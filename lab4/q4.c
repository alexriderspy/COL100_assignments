#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int i=1,k=2,flag=0;
    while(i<=n*n){
        flag=0;
        for(int j=2;j<=sqrt(k);j++){
            if(k%j==0){
                flag=1;break;
            }
        }
        if(flag==1){
            k++;continue;
        }
        else{
            printf("%d ",k);
            k++;
            if(i%n==0) printf("\n");

            i++;
        }
                
    }
    return 0;
}