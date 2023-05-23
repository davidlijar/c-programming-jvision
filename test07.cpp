#include <stdio.h>

int main() {
	
	int month = 0;
	printf("월 입력 : ");
	scanf("%d", &month);
	
	if(month>12 || month <1){
		printf("다시 입력하세요: ");
		return 0; 
	}else if(month==12 || month==1 || month==2){
		printf("겨울");
	}else if(month>=3 && month<=5){
		printf("봄");
	}else if(month==6 || month==7 || month==8){
		printf("여름");
	}else if(month==9 || month==10 || month==11){
		printf("가을");
	}
	

	
	return 0;
}
