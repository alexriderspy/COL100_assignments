#include<stdio.h>
#include<string.h>

struct stack{
    int size;
    int items[100];
};

void push(struct stack *pt,int x){
    int sz=pt->size;
    (pt->items)[sz]=x;
    (pt->size)++;
}

int pop(struct stack *pt){
    int top=(pt->items)[pt->size-1];
    pt->size--;
    return top;
}

int peek(struct stack *pt){
    return (pt->items)[pt->size-1];
}

int isEmpty(struct stack *pt){
    if(pt->size==0) return 1;
    else return 0;
}

int main(){
    int n;
    char str[100];
    scanf("%d",&n);
    struct stack s;
    s.size=0;
    while(n--){
        scanf("%s",str);
        if(strcmp(str,"push")==0){
            int item;
            scanf("%d",&item);
            push(&s,item);

        }else if(strcmp(str,"pop")==0){
            printf("%d\n",pop(&s));


        }else if(strcmp(str,"peek")==0){
            printf("%d\n",peek(&s));
        }
        else{
            if(isEmpty(&s)==1)
            printf("Empty");
            else printf("Not Empty");
        }
    }
}