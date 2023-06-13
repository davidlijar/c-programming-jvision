#include <stdio.h> 

int main() {
	
	
	FILE *fpp = fopen("mystory.txt", "r");
	FILE *fp2 = fopen("yourstory.txt", "w");
	
	char data[100];
	
	
	while(fscanf(fpp,"%s", data)!=EOF){
		fprintf(fp2,"%s\n", data);
	}
	
	
	
	
	
	fclose(fpp);
	fclose(fp2);
	
	return 0;
}
