#include <stdio.h>

int main() {
	int a[5][5] = {0};
	int k=1;
	int start=2; int end=2;
	
	for(int i=0; i<5; i++){
		if(i<=2){
		for(int j=start;j<=end; j++){
			a[i][j] = k++;	
		}
		start--;
		end++;	
		}else{
		start++;
		end--;
			for(int j=start;j<=end; j++){
			a[i][j] = k++;	
		}
		
		
		}
			
		
		
	}
	
	for(int i=0;i <5; i++){
		for(int j=0; j<5; j++){
			printf("%3d", a[i][j]);
		}printf("\n");
	}
	
	
	return 0;
}
