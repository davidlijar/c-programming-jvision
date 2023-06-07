#include <stdio.h>

int f(int x, int y);
void f1(int x);
void f3(int x);

int main() {
	int n;
	scanf("%d",&n);
	f3(n);
	
	
	
	return 0;
}

int f(int x, int y){
	int sum=0;
	
	for(int i=x; i<=y; i++){
		sum += i;
	}
	
	return sum;
}

void f1(int x){
	if(x%2==0){
		printf("It's even number");
	}else{
		printf("It's odd number");
	}
}

void f3(int x){
	if(x>=2 && x<=9){
		for(int i=1; i<=9; i++){
			printf("%d x %d = %d \n", x,i,x*i);
		}
	}else{
		printf("it's out of range, only between 2 and 9'");
	}
}
