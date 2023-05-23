#include <stdio.h>

int main() {
	
	int n,sum=0,i=0,result;
	
	printf("입력하세요 : ");
	scanf("%d", &n);
	
	while(n!=0){
		printf("입력하세요 : ");
		sum += n;
		scanf("%d",&n);
		i++;
	}
	result = sum/3;
	printf("입력하신 숫자의평균은 %d입니다", result);
	
	return 0;
}
