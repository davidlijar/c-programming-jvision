#include <stdio.h>

int main() {
	int a[5][5] = {0};
	int k=1;
	int start=0; int end=4;
	int d;
	
	scanf("%d", &d);
	
	for(int i=0; i<7; i++){
		if(i<3){
		for(int j=start;j<=end; j++){
			a[i][j] = k++;	
			
		}
		end--;
			
		}else{
			end=3;
			for(int j=start;j<=end; j++){
			a[i][j] = k++;
		}
			end++;
			
		
		
		
		}
			
		
		
	}
	
	for(int i=0;i <5; i++){
		for(int j=0; j<5; j++){
			printf("%3d", a[i][j]);
		}printf("\n");
	}
	
	
	return 0;
}
