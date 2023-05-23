#include <stdio.h>

int main() {
	int data[10]={50,45,65,77,48};
	
	//maximum number
	int max=0;
		int min=data[0];
	for(int i=0; i<5; i++){
		if(max<data[i]){
			max=data[i];
			
		}
		
		
		if(data[i]<min){
			min=data[i];
		}
	
	}
	
	//Minimum number


		
	
	printf("Max: %d", max);
	printf("Min: %d", min);
	
	return 0;
}
