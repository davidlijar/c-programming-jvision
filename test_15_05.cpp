#include <stdio.h>

int main() {
	FILE *fp = fopen("jj.txt", "rb");
	
	int data[100];
	
	while(fscanf(fp,"%d", data)!=EOF){
		printf("%d", data);
	}
	
	printf("%d", data[0]);
	
	for(int i=data[0]; i<data[1]; i++){
		for(int j=1; j<10; j++){
			printf("%d x %d = %d\n", i,j,i*j);
		}printf("\n");
	}
	
	
	return 0;
}
