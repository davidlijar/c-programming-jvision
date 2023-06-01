# include <stdio.h>

//call by reference or call by address

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main() {
	
	int a = 3;
	int b = 5;
	
	printf("*** before swap ***\n");
	printf("a=%d, b=%d\n",a,b);
	
	swap(&a,&b);
	
	
	printf("*** after swap ***\n");
	printf("a=%d, b=%d\n",a,b);
	
	return 0;
}
