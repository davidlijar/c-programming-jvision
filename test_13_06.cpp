#include <stdio.h>

int f(int x);

int main() {
	int n;
	
	scanf("%d", &n);
	printf("%d\n",f(n));
	
	return 0;
}

int f(int x){
	int sum=0;
	
	for(int i=1;i<=x; i++){
		sum+=i;
	}
	
	return sum;
}
