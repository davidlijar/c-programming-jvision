#include <stdio.h>

int main() {
	
	int i;
	
	for(i=1; i<=10; i++){
		printf("�ȳ��ϼ���\n");
	}
	
	printf("\n\n");
	
	i=1;
	while(i<11){
		printf("�ȳ��ϼ���!\n");
		i++;
	}
	
	
	printf("\n\n");
	
	i=12;
	do{
		printf("�ȳ��ϼ���!\n");
		i++;
	}while(i<10);
	
	return 0;
}
