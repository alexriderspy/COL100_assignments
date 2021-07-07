#include<stdio.h>

void cyclicSwap(int *a, int *b,int *c){
    int tmp;
    tmp=*c,*c=*b,*b=*a,*a=tmp;
}
int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    
    cyclicSwap(&a,&b,&c);
    printf("%d %d %d",a,b,c);

}