#include <stdio.h>


int main() {
	
	int data[4]={1,2,3,4};

	printf("data�� ���� �� ��� : %d %d\n", data[0], data[1]);
	
	printf("data�� ���� �ּ� ��� : %p %p\n", &data[0], &data[1]);
	
	printf("data�� ���� first �ּ�  ��� : %p %p\n", &data[0], data);
	printf("data�� ���� second �ּ�  ��� : %p %p\n", &data[1], data+1);
	
	printf("data�� first element : %d %d\n",data[0], *data);
	printf("data�� second element : %d %d\n",data[1], *(data+1));
	
	
	return 0;
}
