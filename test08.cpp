#include <stdio.h>

int main() {
	
	int month = 0;
	printf("�� �Է� : ");
	scanf("%d", &month);

	switch(month){
		case 12:
		case 1:
		case 2:
			printf("�ܿ��Կ���!");
			break;
		case 3:
		case 4:
		case 5:
			printf("���̿���!");
			break; 
		case 6:
		case 7:
		case 8:
			printf("�����̿���!");
			break;
		default:
			printf("������ �ƴմϴ�!") ;
	}
	

	
	return 0;
}
