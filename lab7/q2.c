#include<stdio.h>

int  main(){
    int n,i=0,c=0;
    char ch;
    scanf("%d", &n);
    scanf("%c",&ch);   
    char str[100];
    
    scanf("%[^\n]s",str);
    if(n==1 && (str[0]==' '||str[0]=='\t')){
        printf("0");return 0;
    }
    
    for(;i<n;i++){
        if((str[i]==' ') ||((str[i]=='\t'))){
            
            c++;
        }
    }
    printf("%d",c+1);
        return 0;
}
