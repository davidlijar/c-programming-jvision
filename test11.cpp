#include <stdio.h>

int main() {
	int i;
	
	/*
	for( i=1;i<=10;i++){
		
		printf("�ȳ��ϼ���!\n");
	}
	*/
	
	int n=0;
	printf("�Է��ϼ��� : ");
	scanf("%d",&n);
	
	while(n>0){
		printf("�ȳ��ϼ���!\n");
		printf("�ٽ� �Է��ϼ��� :"); 
		scanf("%d",&n); 
	}
	
	
	/*
	i=1;
	while(1){
		if(i>10){
			break;
		}
		printf("�ȳ��ϼ���!\n");
		i++;
		}
	*/
	
	return 0;
}
