#include <stdio.h>

int main() {
	
	int month = 0;
	printf("�� �Է� : ");
	scanf("%d", &month);
	
	if(month>12 || month <1){
		printf("�ٽ� �Է��ϼ���: ");
		return 0; 
	}else if(month==12 || month==1 || month==2){
		printf("�ܿ�");
	}else if(month>=3 && month<=5){
		printf("��");
	}else if(month==6 || month==7 || month==8){
		printf("����");
	}else if(month==9 || month==10 || month==11){
		printf("����");
	}
	

	
	return 0;
}
