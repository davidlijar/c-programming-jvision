#include <stdio.h>

int main() {
	int a[5][5] = {0};
	int k =1;
	int start=2,end=2;
	
	for(int i=0; i<5; i++){
		for(int j=start;j<=end; j++){
			a[i][j] = k;
			printf("%3d", a[i][j]);
			k++;
			start--;
			end++;
		}printf("\n");
	}
	
	
	return 0;
}
