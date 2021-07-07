#include<stdio.h>

int main(){
    int tm,n,f=0;
    float b;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //integers in range of [1,n]
    for(int i=0;i<n;i++){
        tm=a[i];
        a[tm%n]+=n;

    }
    for(int i=0;i<n;i++){
        b=a[i]/(n*1.0);
        if(b>2) {
            f=1;
            printf("%d ",a[i]/n?i:n);
        }
    }
    if(!f) printf("No duplicates exist!");
    return 0;

}