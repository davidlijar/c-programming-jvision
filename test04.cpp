#include <stdio.h>

int main() {
	
	int a= 3,b = 5;
	int score=0;
	
	for(;;){
		printf("\n점수 입력(-1:종료) : ");
		scanf("%d", &score);
		if(score == -1){
			break;
		}
		if(score >= 90){
			printf("A\n");
		}else if(score >= 80){
			printf("B\n");
		}else if(score >= 70){
			printf("C\n");
		}else if(score >= 60){
			printf("D\n");
		}else{
			printf("F");
		}
	}
	
	
	
	return 0;
}
