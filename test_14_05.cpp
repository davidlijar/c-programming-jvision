#include <stdio.h>


int main() {
	
	int data[4]={1,2,3,4};

	printf("data의 원소 값 출력 : %d %d\n", data[0], data[1]);
	
	printf("data의 원소 주소 출력 : %p %p\n", &data[0], &data[1]);
	
	printf("data의 원소 first 주소  출력 : %p %p\n", &data[0], data);
	printf("data의 원소 second 주소  출력 : %p %p\n", &data[1], data+1);
	
	printf("data의 first element : %d %d\n",data[0], *data);
	printf("data의 second element : %d %d\n",data[1], *(data+1));
	
	
	return 0;
}
