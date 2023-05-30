#include <stdio.h>

int facto(int x);

//N! 5!=1*2*3*4*5=120
int main() {
	int a=0;
	scanf("%d", &a);
	printf("%d", facto(a));
	
	return 0;
}

int facto(int x){
	int fact=1;
	for(int i=1; i<=x; i++){
		fact*=i;
	}
	
	return fact;
}
