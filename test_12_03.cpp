#include <stdio.h>

int sum(int from,int to);

int main() {
			
	printf("Sum = %d", sum(1,3));
	printf("Sum = %d", sum(1,100));
	printf("Sum = %d", sum(1,1000));
	
	return 0;
}

int sum(int from,int to){
	int s=0;
	for(int i=from; i<=to; i++){
		s += i;
	}
	
	return s;
}
