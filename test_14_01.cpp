#include <stdio.h>


int main() {
	int a=3;
	int *pa;
	pa = &a;
	
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%p\n", pa);
	
	printf("%d\n", *pa);
	
	
	return 0;
}
