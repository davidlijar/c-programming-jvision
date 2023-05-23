#include <stdio.h>

int main() {
	
	int month = 0;
	printf("월 입력 : ");
	scanf("%d", &month);

	switch(month){
		case 12:
		case 1:
		case 2:
			printf("겨울입에요!");
			break;
		case 3:
		case 4:
		case 5:
			printf("봄이에요!");
			break; 
		case 6:
		case 7:
		case 8:
			printf("가을이에요!");
			break;
		default:
			printf("계절이 아닙니다!") ;
	}
	

	
	return 0;
}
