#include <stdio.h>

int main() {
	
	
	int a,sum=0;
	
	scanf("%d", &a);
	
	while(a!=0){
		sum+=a;
		scanf("%d", &a);
	}
	printf("�Է��� ������ ��: %d",sum);
	return 0;
}
