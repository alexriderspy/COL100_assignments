#include<stdio.h>
#include<math.h>

int main(){
    int n,m,t,num=0,temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sqrt(i);j++){
            temp=i-j*j;
            
            if(temp>=0)
            {
                m=ceil(sqrt(temp));
                t=sqrt(temp);
                
                if(m==t){
                  
                    num++;break;      
                }
            }

    }
    
}
    printf("%d",num);
    return 0;
}