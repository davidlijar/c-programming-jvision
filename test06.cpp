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
		printf("¦���Դϴ�!\n");
	}else {
		printf("Ȧ���Դϴ�!\n");
	}
	
	printf("�ٽ� �Է��ұ��?(��= 1/�ƴ�=2) : ");
	scanf("%d", &n); 
	}
	
	
	return 0;
}
