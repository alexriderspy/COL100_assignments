#include<stdio.h>
#include<math.h>
int power(int a, int exp){
    int prod=1;
    while(exp--){
        prod*=a;
        
    }
    return prod;
}
int main(){
    int type;
    int arr[100];
    int n,dig,newnum=0,index=0;
    scanf("%d",&type);
    if(type==1){
        scanf("%d",&n);
        while(n){
            dig=n%10;
            newnum+=power(2,index)*dig;
            n=n/10;
            index++;            
        }
        printf("%d",newnum);
    }
    else{
        
        scanf("%d",&n);
        while(n){
            arr[index]=n%2;
            n/=2;
            index++;
        }
        for(int i=index-1;i>=0;i--){
            printf("%d",arr[i]);
        }
    }
    return 0;

}