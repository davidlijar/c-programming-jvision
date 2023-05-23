#include <stdio.h>

int main() {
	int a[5][5] = {0};
	
	int b;
	

	
	for(int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			scanf("%d",&b);
			a[i][j] = b;
		}
	}
	
	
	for(int i=0; i<5; i++){
		for(int j=0;j<4;j++){
			printf("%2d", a[i][j]);
			if(j==3){
				int sum;
				for(int k=0;k<4;k++){
					sum += a[i][k];
				}
				a[i][j] = sum;
				sum=0;
				printf(" %d", a[i][j]);
			}
			
			
		}printf("\n");
	}
	
	
	return 0;
}
