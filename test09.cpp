/* 245�� ��� ����� ã��
����� ���ô�! */



#include <stdio.h>

int main() {
	
	int n = 245;
	printf("All the factors of 245 : \n");
	for(int i=1;i<=245;i++){
		int result = 245%i;
		if(result==0){
			printf("%d\n",i);
		}
	}
	
	/*int n;
	printf("Input Number: ");
	scanf("%d", &n);
	int result = n%5;
	if(result==0){
		printf("5�� ����Դϴ�");
	}else{
		printf("5�� ��� �ƴմϴ�");

	}*/
	
	return 0;
} 
