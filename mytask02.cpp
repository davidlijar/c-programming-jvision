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
		
		//way 1 (better algorithm)
		/*
		ascii value of '0' = 48
		so...,in case of input '0' (numbers[0] = '0');
		storage[48-48]++;
		storage[0]++: //now you know what index to increase;
		
		
		*/
		storage[numbers[i]-'0']++;
		
		
		
		/*
		//Way 2
		switch(numbers[i]){
			case '0':
				storage[0]++;
				break;
			case '1':
				storage[1]++;
				break;
			case '2':
				storage[2]++;
				break;
			case '3':
				storage[3]++;
				break;
			case '4':
				storage[4]++;
				break;
			case '5':
				storage[5]++;
				break;
			case '6':
				storage[6]++;
				break;
			case '7':
				storage[7]++;
				break;
			case '8':
				storage[8]++;
				break;
			case '9':
				storage[9]++;
				break;
		}
		*/
		
		
	}
	
	for(int i=0; i<10; i++){
		if(storage[i]==0){
			printf("%d -", i);
		}else{
			printf("%d ", i);
			for(int j=1; j<=storage[i]; j++){
				printf("*");
			}
		}
		printf("\n");
			
	}
	
	return 0;
}
