#include <stdio.h>

void swap(int *x,int *y);


int main() {
	int x=3,y=5;
	
	swap(&x,&y);
	
	
	
	return 0;
}

void swap(int *x,int *y){
	
	printf("***Before swap***\n");
	printf("x = %d, y = %d\n",*x,*y);
	
	//swap
	
	int temp;
	temp = *x;
	*x=*y;
	*y=temp;
	
	printf("***Before swap***\n");
	printf("x = %d, y = %d\n",*x,*y);
}
