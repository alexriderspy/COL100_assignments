#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char str[100];
    scanf("%d",&n);
    while(n--){
        char ch;
        int f=0;
        scanf("%s",str);
        int a=0,b=0,c=0;
        //a->{}, b-> [], c->()
        for(int i=0;i<strlen(str);++i){
            if(str[i]=='{') {
                if(c>=1 || b>=1) f=1;
                a++;
            }
            if(str[i]=='[') {
                if(c>=1) f=1;
                b++;
            }
            if(str[i]=='('){
                c++;
            } 
            if(str[i]=='}') a--;
            if(str[i]==']') b--;
            if(str[i]==')') c--;
            if(a<0 || b<0 || c<0) f=1;
        }   
        if(f==1){
            printf("Not Balanced\n"); continue;
        }
        if(a==0 && b==0 && c==0){
            printf("Balanced\n"); continue;
        }
        else{
            printf("Not Balanced\n");continue;
        }
    }
}