#include <stdio.h>

int main() {
	int i;
	
	/*
	for( i=1;i<=10;i++){
		
		printf("안녕하세요!\n");
	}
	*/
	
	int n=0;
	printf("입력하세요 : ");
	scanf("%d",&n);
	
	while(n>0){
		printf("안녕하세요!\n");
		printf("다시 입력하세요 :"); 
		scanf("%d",&n); 
	}
	
	
	/*
	i=1;
	while(1){
		if(i>10){
			break;
		}
		printf("안녕하세요!\n");
		i++;
		}
	*/
	
	return 0;
}
