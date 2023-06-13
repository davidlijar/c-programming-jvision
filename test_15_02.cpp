#include <stdio.h> 

int main() {
	
	FILE *fp = fopen("mystory.txt", "a");
	
	
	fprintf(fp,"%s\n", "#Áñ°Å¸Ô´Â ¹Ê½Ä: Â¯»Í,ÅÁ¼öÀ°");
	fprintf(fp,"%s\n","Ãë¹Ì: Ãà±¸");
	
	fclose(fp);
	
	return 0;
}
