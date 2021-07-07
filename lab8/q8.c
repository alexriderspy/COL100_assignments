#include<stdio.h>

int main(){
    int n,arr[100][100],cnt=0,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j]==1)cnt++;
        }
    }
    printf("Number of pairs of friends = %d\n",cnt);

    scanf("%d %d",&x,&y);
    for(int i=0;i<n;i++){
        if(arr[x][i] && arr[x][i]==arr[y][i]){
            printf("true");return 0;
        }
    }
    printf("false");
}