#include <stdio.h>

int main() {
	int i;
	int j;
	for (i=1; i<=9;i++) {
		for(j=2; j<=9; j++ ){
			printf("%d * %d = %d\t", j,i,j*i);
		}
		printf("\n");
	}
	
	return 0;
} 
