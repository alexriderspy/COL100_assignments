#include<stdio.h>

int main(){
    float marks;
    scanf("%f",&marks);
    if(marks<=100){
        if (marks>=86) printf("A+");
        else if (marks>=71) printf("A-");
        else if (marks>=56) printf("B+");
        else if (marks>=41) printf("B-");
        else if (marks>=26) printf("C");
        else if (marks>=0) printf("F");
        else printf("Invalid marks");
    }
    else{
        printf("Invalid marks");
    }
}