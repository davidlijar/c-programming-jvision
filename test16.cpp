#include <stdio.h>

int main() {
	int n=0;
	
	for(int i=1; i<=100; i++ ){
		int three = i%10; //3 remain
		int three_include = i/3; //0 remain or factor of 3
		int six = i%10; //6 remain
		int six_include = i/6;
		int nine = i%10;
		int nine_include = i/9;
		
		if(three==3 || three_include==10 || six==6 || six_include==10 || nine==9 || nine_include==10){
			printf("! ");
		}else{
			printf("%d ", i);
		}
	}
	
	return 0;
}
