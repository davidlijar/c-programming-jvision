#include <stdio.h>

int main() {
	
	int a=0;
	
	
	for(;;){
		printf("\n메뉴 선택(1.음료, 2.차, 3.간식, 4.종료)");
	scanf("%d", &a);
	
	if(a==4){
		printf("프로그램을 종료합니다\n");
		break;
	} 
	
	if(a==1){
		printf("음료를 선택하셨습니다.");
	}else if(a==2){
		printf("차를 선택하셨습니다.");
	}else if(a==3){
		printf("간식을 선택했습니다.");
	}else{
		printf("메뉴 선택 번호가 잘못되었어요.\n");
	}
	
	printf("a = %d", a);
	}
	
	
	printf("for 문을 벗어남!");
	
	return 0;
}
