#include<stdio.h>
#include<string.h>

char *toLowerCase(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=('a'-'A');
            
        }
    }
    return str;
}

int isSubstring(char s1[],char s2[]){
    int i,j;
    for(i=0;s1[i]!='\0';i++){
        int store=i;
        for(j=0;s2[j]!='\0';j++){
            if(s1[i]!=s2[j])break;
            if(s1[i]==s2[j]){
                i++;
            }
            
        }
        if(s2[j]=='\0'){
            return store;
        }
        i=store;
    }
    return -1;
}
int main(){
    char a[100],b[100];
    scanf("%s",a);
    
    scanf("%s",b);
    //printf("%s",a);
    char *a1=toLowerCase(a);
    char *b1=toLowerCase(b);
    printf("%d",isSubstring(a1,b1));
}