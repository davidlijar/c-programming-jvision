#include <stdio.h>

int main() {
	int exclude=1, n=0;
	
	for(int i=1; i<=3; i++){
		for(int j=1; j<=i+2; j++){
			if (j==exclude){
				printf("x");
				
			}else{
				printf("%d", n+=1);
				exclude++;
			}
			
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	//First-Solution but not clean or dynamic
	/*
	int n=1;int d = 3;
	for(int i=1; i<=3; i++){
		for(int j=1; j<=i+2; j++){
			
			if(j==d){
			printf("%d", n);
			
			
		}
		else if(j==d+1){
			printf("%d", n+=1);
		}else if(j==d+2){
			printf("%d", n+=1);
		}else if(j==d+3){
			printf("%d", n+=1);
		}
		else if(j==d+4){
			printf("%d", n+=1);
		}
		else {
			printf(" ");
		}
		}
		printf("\n");
		n++;
		d--;
	}
	*/
	
	
	return 0;
}
