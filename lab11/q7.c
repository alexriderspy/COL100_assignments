#include<stdio.h>
#include<string.h>

int main(){
    int n,a=0;
    char str[100];
    scanf("%d",&n);
    while(n--){
        int f=0;
        a=0;
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++){
            if(str[i]=='(') a++;
            if(str[i]==')') a--;
            if(a<0) {
                f=1;break;
            }
        }
        if(f==1){
            printf("Not Balanced\n"); continue;
        }
        if(a==0) {
            printf("Balanced\n");continue;
        }
        printf("Not Balanced\n"); continue;
    }
}