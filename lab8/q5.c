#include<stdio.h>
#include<stdbool.h>

int index[27];
bool isPangram(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            continue;
        }
        int pos=s[i]-'a';
        index[pos]=1;
    }
    for(int i=0;i<26;i++){
        if(index[i]==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    char str[100];
    scanf("%[^\n]s",str);
    for(int i=0;i<26;i++){
        index[i]=0;
    }
    if(isPangram(str)){
        printf("true");
    }
    else{
        printf("false");
    }
}
