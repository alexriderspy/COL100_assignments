#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<malloc.h>

char *lcp(char **strs,int n,char* dest){
    int j,minlen=9999,index=0;
    
    for(int i=0;i<n;i++){
 
        if(strlen(*(strs +i))<minlen){
            index=i,minlen=strlen(*(strs +i));
        }
    }
 
    char *ans=malloc(sizeof(char)*11);
    for(j=0;j<strlen(*(strs +index));j++){
        char ch=*(*(strs+index)+j);
        
        for(int k=0;k<n;k++){
            if(ch!=*(*(strs+k)+j)) {
                if(j==0){
                    strcpy(ans,"No common prefix");
                    dest=ans;
                    return dest;
                }
                (*(ans+j))='\0';
                dest=ans;
                return dest;
            }

        }
        (*(ans+j))=ch;
    }
    (*(ans+j))='\0';
    dest=ans;
    return dest;
}

int main(){
    int n;
    scanf("%d",&n);
    char **str=NULL;
    /*
    you have to allocate memory for every str[i]
    */

    str=malloc(sizeof(char*)*(n));
    for(int i=0;i<n;i++){
        str[i]=malloc(sizeof(char)*11);
    }
    for(int i=0;i<n;i++) {
        scanf("%s",*(str+i));
    }
 
    char* ans=NULL;
    ans=malloc(sizeof(char)*11);
    
    ans=lcp(str,n,ans);
    printf("%s",ans);
}