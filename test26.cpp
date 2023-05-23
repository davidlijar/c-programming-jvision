#include <stdio.h>

int main() {
	int a[3][3] = {0};
	int k =0;
	
	
	int c =0, d=0;
	
	scanf("%d%d", &c, &d);

	while(c<3 && d<3){
		a[c][d]=1;
		
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
			
			printf("%d", a[i][j]);
			
		}
		printf("\n");
	}
	scanf("%d%d", &c, &d);
	}
	
	
	return 0;
}
