#include <stdio.h>

int main() {
	int a[3][9] = {0};
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<9; j++){
			a[i][j] = (i+2)*(j+1);
			printf("%3d", a[i][j]);
		}printf("\n");
		
	}
	
	return 0;
}
