#include <stdio.h>

void f(int *a){
	for(int i=0; i<10; i++){
		//a[i]+=10;
		*(a+i)+=10;
	}
}


int main() {
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	
	f(a);
	
	for(int i=0; i<10; i++){
		printf("%d ", a[i]);
	}	
	
	
	return 0;
}
