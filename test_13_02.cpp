#include <stdio.h>

void f(int x);

int main() {
	int a=0;
	scanf("%d", &a);
	f(a);
	
	return 0;
}


void f(int x){
	int r = x%2;
	if(r==0){
		printf("¦���Դϴ�");
}else{
	printf("Ȧ���Դϴ�");
}
}
