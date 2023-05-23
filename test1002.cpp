#include <stdio.h>

int main() {
	int a[5][5] = {0};
	int k=1;
	
	for(int i=0; i<5; i++){
		
		for(int j=0; j<5; j++){
			a[i][j] = k;
			k++;
			
		}
	
}
	
	
	
	for(int i=0; i<5; i++){
		if(i%2==0){
			for(int j=0; j<5; j++){
				printf("%3d", a[i][j]);
			
		}printf("\n");
	}else{
		for(int j=4; j>=0; j--){
			printf("%3d", a[i][j]);
	}printf("\n");
		
		
	}
}

	return 0;
}
