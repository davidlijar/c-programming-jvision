#include <stdio.h> 

int main() {
	
	FILE *fp = fopen("mystory.txt", "a");
	
	
	fprintf(fp,"%s\n", "#��ŸԴ� �ʽ�: ¯��,������");
	fprintf(fp,"%s\n","���: �౸");
	
	fclose(fp);
	
	return 0;
}
