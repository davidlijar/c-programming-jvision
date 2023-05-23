#include <stdio.h>

int main() {
	int a[5][5] = {0};
	int sum;
	int k=0;
	int space = 4;
	
	//My own way
	for(int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			
			if(j<space){
				printf("   ");
			}else {
				a[i][j]=++sum;
				printf("%3d", a[i][j]);
		}
		
			
		}
		space--;
		printf("\n");
		
	}
	
	
	// Professor's way
	/*
	for(int i=0; i<5; i++){
		for(int j=4-i;j<5;j++){
			a[i][j]=++k;
		}
	}
	
		
	for(int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			if(a[i][j]==0)
				printf("   ");	
			else
				printf("%3d", a[i][j]);
		}
		printf("\n");
	}	
	*/
			
			
						
		
		
		
	
		
		
	
	
	
	
	return 0;
}
