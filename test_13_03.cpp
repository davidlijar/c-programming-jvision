#include <stdio.h>

void f(int x);

int main() {
	int a=0;
	scanf("%d", &a);
	f(a);
	
	return 0;
}

void f(int x){
	if(x>=2 && x<=9){
		for(int i=1; i<=9; i++){
			printf("%d x %d = %d\n",x,i,x*i);
		}
	}else{
		printf("구구단이 아닙니다!");
	}
	
}
