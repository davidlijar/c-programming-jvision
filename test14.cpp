#include <stdio.h>

int main() {
	
	int n,sum=0,i=0,result;
	
	printf("�Է��ϼ��� : ");
	scanf("%d", &n);
	
	while(n!=0){
		printf("�Է��ϼ��� : ");
		sum += n;
		scanf("%d",&n);
		i++;
	}
	result = sum/3;
	printf("�Է��Ͻ� ����������� %d�Դϴ�", result);
	
	return 0;
}
