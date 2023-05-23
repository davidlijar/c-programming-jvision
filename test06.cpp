#include <stdio.h>

int main() {
	int n;

	
	for(;;){
		printf("\nInput Number :");
	scanf("%d", &n);
	
	int result = n % 2;
	
	if(n==0){
		break;
	}
	
	if(result == 0){
		printf("짝수입니다!\n");
	}else {
		printf("홀수입니다!\n");
	}
	
	printf("다시 입력할까요?(예= 1/아니=2) : ");
	scanf("%d", &n); 
	}
	
	
	return 0;
}
