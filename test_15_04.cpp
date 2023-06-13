#include <stdio.h> 

int main() {
	
	
	FILE *fp1 = fopen("source2.jpg", "rb");
	FILE *fp2 = fopen("target2.jpg", "wb");
	
	char data[100];
	
	//%[^n]s = %s
	while(fread(data,sizeof(data),1, fp1)!=NULL){
		fwrite(data, sizeof(data),1,fp2);
	}
	
	
	
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
