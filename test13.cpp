#include <stdio.h>

int main() {
	
	int n,m,l,result;
	
	
	for(int i=1; i<=3; i++){
		printf("숫자 입력(1또는2): ");
	scanf("%d", &n);
		if(n==1){
		printf("밑변과 높이 입력: ");
		scanf("%d %d",&m,&l);
		 result =  (m*l)/2;
		printf("삼각형의 넓이는%d입니다.\n", result);
	}else if(n==2){
		printf("가오의 세로 입력: ");
		scanf("%d %d",&m,&l);
		 result =  m*l;
		printf("삼각형의 넓이는%d입니다.\n", result);
	}else if(n==3){
		printf("다시 입력하세요.");
		scanf("%d", &n);
	}
	}
	 
	
	
	return 0;
}
