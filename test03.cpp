#include <stdio.h>

int main() {
	
	int a=0;
	
	
	printf("\n�޴� ����(1.����, 2.��, 3.����, 4.����)");
	scanf("%d", &a);
	
	if(a==4){
		printf("���α׷��� �����մϴ�\n");
		return 0;
	} 
	
	if(a==1){
		printf("���Ḧ �����ϼ̽��ϴ�.");
	}else if(a==2){
		printf("���� �����ϼ̽��ϴ�.");
	}else if(a==3){
		printf("������ �����߽��ϴ�.");
	}else{
		printf("�޴� ���� ��ȣ�� �߸��Ǿ����.\n");
	}
	
	printf("a = %d", a);
	
	
	printf("for ���� ���!");
	
	return 0;
}
