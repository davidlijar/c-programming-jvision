#include <stdio.h>

void change(int *x,int *y, int *z);

int main() {
	
	int a=5,b=6,c=7;
	
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	
	change(&a,&b,&c);
	
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	
	return 0;
}

void change(int *x,int *y, int *z){
	*x *= 5;
	*y *= 5;
	*z *= 5;
}
