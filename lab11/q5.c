#include<stdio.h>
#include<math.h>

struct complex{
    float real,img;
};

struct complex add(struct complex n1, struct complex n2){
    struct complex f;
    f.real=n1.real+n2.real;
    f.img=n1.img+n2.img;
    return f;
}
struct complex sub(struct complex n1, struct complex n2){
    struct complex f;
    f.real=n1.real-n2.real;
    f.img=n1.img-n2.img;
    return f;
}
struct complex mul(struct complex n1, struct complex n2){
    struct complex f;
    f.real=n1.real*n2.real-n1.img*n2.img;
    f.img=n1.real*n2.img+n1.img*n2.real;
    return f;
}
struct complex div(struct complex n1, struct complex n2){
    struct complex f;
    f.real=n1.real*n2.real+n1.img*n2.img;
    f.real/=(sqrt(n2.real*n2.real+n2.img*n2.img));
    f.img=n1.img*n2.real-n1.real*n2.img;
    
    f.img/=(sqrt(n2.real*n2.real+n2.img*n2.img));
    return f;
}

void print(struct complex c){
    printf("%f %f\n",c.real,c.img);
}
int main(){
    struct complex p,q;
    char ch;
    scanf("%f %f %c %f %f",&p.real,&p.img,&ch,&q.real,&q.img);
    if(ch=='+') {
        print(add(p,q));
    }
    else if(ch=='-'){
        print(sub(p,q));
    }
    else if(ch=='*'){
        print(mul(p,q));
    }
    else{
        print(div(p,q));
    }
}