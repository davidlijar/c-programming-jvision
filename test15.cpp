#include <stdio.h>

int main() {
	
	int i;
	
	for(i=1; i<=10; i++){
		printf("¾È³çÇÏ¼¼¿ä\n");
	}
	
	printf("\n\n");
	
	i=1;
	while(i<11){
		printf("¾È³çÇÏ¼¼¿ä!\n");
		i++;
	}
	
	
	printf("\n\n");
	
	i=12;
	do{
		printf("¾È³çÇÏ¼¼¿ä!\n");
		i++;
	}while(i<10);
	
	return 0;
}
