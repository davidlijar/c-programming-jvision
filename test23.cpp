#include <stdio.h>

int main() {
	int a[3][3]={0};
	int n,k;
	
	scanf("%d%d", &n, &k);
	while(n<3 && k<3){
	

		
	a[n][k]++;

		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	scanf("%d%d", &n, &k);
		
	}
	
		printf("Limit Reach! (This is 3x3 matrix)... ");
	
	
	
	
	
	
	return 0;
}
