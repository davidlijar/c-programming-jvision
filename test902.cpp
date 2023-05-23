#include <stdio.h>

int main() {
	int a[5][5] = {0};
	int k=1;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			a[i][j] =k++;
			printf("%3d", a[i][j]);
			
		}printf("\n");
	}
	
	return 0;
}
