#include<stdio.h>

int main(){
    int n,size;
    scanf("%d %d",&n,&size);
    for(int i=1;i<=n;i++){
        for(int l=1;l<=size;l++)
        {
            for(int j=1;j<=(size-l);j++){
                printf("  ");
            }
            for(int k=1;k<=(2*l-1);k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    for(int i=1;i<=size;i++){
        //int base=size/2-1;
        int rem=size-2;
        for(int j=1;j<=rem;j++){
            printf("  ");
        }
        for(int i=1;i<=3;i++){
            printf("* ");
        }
        printf("\n");
    }
}