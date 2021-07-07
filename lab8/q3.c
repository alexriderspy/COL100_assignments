#include<stdio.h>

char *toLowerCase(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=('a'-'A');
            
        }
    }
    return str;
}
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    char *ans=toLowerCase(str);
    printf("%s",ans);
}