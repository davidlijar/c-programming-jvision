#include <stdio.h>

char grade(int a);

int main() {
	int a = 0;
	scanf("%d", &a);
	printf("%cÀÔ´Ï´Ù.", grade(a));	
	
	
	return 0;
} 

char grade(int a){
	char c = 'c';
	if(a>=90){
		c='A';
	}else if(a>=80){
		c='B';
	}else if(a>=70){
		c='C';
	}else if(a>=60){
		c='D';
	}else if(a<60){
		c='F';
	}
	
	return c;
}
