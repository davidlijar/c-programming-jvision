#include <stdio.h>
#include <string.h>

int main() {
	
	char numbers[20];
	int storage[10];
	
	printf("Input Number : ");
	scanf("%s", numbers);
	
	int len = strlen(numbers);
	
	for(int i=0; i<10; i++){
		storage[i]=0;
		
	}
	
	
	for(int i=0; i<len; i++){
		storage[numbers[i]-'0']++;
	}
	
	
	/*
	for(int i=0; i<len; i++){
		if(numbers[i]=='0'){
			storage[numbers[i]-'0']++;
		}else if(numbers[i]=='1'){
			storage[1]++;
	}
	}
	*/
	
	
	
	for(int i=0; i<10; i++){
		printf("%d %d\n", i, storage[i]);	
	}
	
	return 0;
}
