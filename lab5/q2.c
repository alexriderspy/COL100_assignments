#include<stdio.h>
#include<math.h>

int main(){
    int lb,ub,flag=0;
    scanf("%d %d",&lb,&ub);
    for(int i=lb;i<=ub;i++){
        flag=0;
        for(int j=1;j*j*j<=i;j++){
            for(int k=j+1;k*k*k+j*j*j<=i;k++){
                if(j*j*j+k*k*k==i){
                    flag++;
                }
                if(flag==2) {
                    printf("%d\n",i);
                    break;
                }
            }
            if(flag==2) break;
        }
        
    }
    return 0;
}