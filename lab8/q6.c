#include<stdio.h>

void encrypt(char str[], int k){
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z')){
            str[i]=(str[i]-'a'+k)%26 + 'a';
        }else if(str[i]>='A' && str[i]<='Z'){
            str[i]=(str[i]-'A'+k)%26 + 'A';
        }
    }
}
void decrypt(char str[], int k){
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z')){
            str[i]=(str[i]-'a'-k)%26 + 'a';
        }else if(str[i]>='A' && str[i]<='Z'){
            str[i]=(str[i]-'A'-k)%26 + 'A';
        }
    }
}


int main(){
    char str[100];
    scanf("%s",str);
    int k;
    scanf("%d",&k);
    encrypt(str,k);
    printf("%s\n",str);
    decrypt(str,k);
    printf("%s",str);
    
}