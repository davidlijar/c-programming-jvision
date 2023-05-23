#include <stdio.h>



int main() {
	
	int data[9];
	
	
	int len = sizeof(data) / sizeof(data[0]);
	
	
	for(int i=0; i<len; i++){
		data[i] = (i+1)*11;
		
		printf("%d\n", data[i]);
	}
	
	
	//for(int i=0; i<strlen(a);)
	
	
	return 0;
}
