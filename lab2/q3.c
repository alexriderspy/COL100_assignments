#include<stdio.h>
#include<math.h>

int main(){
	unsigned int d;
        int flag=0;
	scanf("%u",&d);
	//since i am taking an unsigned int as input, we can't enter negative numbers
    if(d==0 || d==1) printf("Not a Prime Number\n");
    else{
    for(int i=2;i<sqrt(d);i++){
		if(d%i==0){
			flag=1;
			break;
		}
	
	}
	if(flag==1) printf("Not a Prime Number\n");
	else if(flag==0) printf("Is a Prime Number\n");
    }
	return 0;
}
