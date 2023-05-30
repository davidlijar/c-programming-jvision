#include <stdio.h>

void f();
int f1();
float f2();
char f3();
int f4(int a);
int f5(int a, int b);

int main() {
	
	for(int i=0;i<4; i++){
		f();
		printf("\n");
	}
	printf("%d", f1());
	printf("\n%0.3f", f2());
	printf("\n%c", f3());
	printf("\n%d", f4(134));
	printf("\n%d", f5(34,56));
	
	
	return 0;
}

void f(){
	printf("Hello!");
}
int f1(){
	
	
	return 10;
}
float f2(){
	return 14.45;
}
char f3(){
	return 'A';	
}
int f4(int a){
	return a+10;
}
int f5(int a, int b){
	int r=0;
	if(a>b){
		r = a;
	}else{
		r=b;
	}
	return r;
}

