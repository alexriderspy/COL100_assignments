#include<stdio.h>
#include<string.h>

char* strcat(char* dest, const char*src){
    
    while((*dest)!='\0'){
        dest++;
       
    }
    while((*src)!='\0'){
        *dest=*src; dest++,src++;
    }
    (*dest)='\0';
    return dest;
}

int main(){
    char dest[100],src[100];
    
    scanf("%s",dest);
    scanf("%s",src);
    strcat(dest,src);
    printf("%s",dest);
}