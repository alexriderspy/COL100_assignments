#include<stdio.h>

int reper(char ch){
    switch (ch)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    
    default:
    return -1;
        break;
    }
}
int main(){
    int n;
    char ch,c;
    scanf("%d",&n);
    scanf("%c",&c);
    int number=0;
    for(int i=0;i<n;i++){
        scanf("%c",&ch);
        number+=reper(ch);    
    }
    printf("%d\n",number);

}