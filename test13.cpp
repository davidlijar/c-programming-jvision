#include <stdio.h>

int main() {
	
	int n,m,l,result;
	
	
	for(int i=1; i<=3; i++){
		printf("���� �Է�(1�Ǵ�2): ");
	scanf("%d", &n);
		if(n==1){
		printf("�غ��� ���� �Է�: ");
		scanf("%d %d",&m,&l);
		 result =  (m*l)/2;
		printf("�ﰢ���� ���̴�%d�Դϴ�.\n", result);
	}else if(n==2){
		printf("������ ���� �Է�: ");
		scanf("%d %d",&m,&l);
		 result =  m*l;
		printf("�ﰢ���� ���̴�%d�Դϴ�.\n", result);
	}else if(n==3){
		printf("�ٽ� �Է��ϼ���.");
		scanf("%d", &n);
	}
	}
	 
	
	
	return 0;
}
