#include <stdio.h>

void f(int *a){
	*a = *a + 1;
}

int main() {
	int a=10;
	int *p_a=&a;
	
	
	printf("%p\n", &a);
	printf("%p\n", p_a);
	
	printf("%d\n", a);
	printf("%d\n", *p_a);
	
	printf("a=%d\n", a);
	f(&a);
	printf("a=%d\n", a);
}
