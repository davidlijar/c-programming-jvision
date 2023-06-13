#include <stdio.h> 

int main() {
	
	FILE *fp = fopen("mystory.txt", "w");
	
	
	
	fprintf(fp,"%s\n", "#이름:리자"); 
	fprintf(fp,"%s\n", "#주민번호:90028-1012589" );
	fprintf(fp,"%s\n", "#전화번호: 101-2178-4121" );
	
	fclose(fp);
	
	FILE *fpp = fopen("mystory.txt", "r");
	FILE *fp2 = fopen("yourstory.txt", "w");
	
	char data[100];
	
	//fgets(data,100,fpp)
	//fscanf(fpp,"%s",data);
	
	/*
	while(fgets(data,100,fpp)){
		printf("%s", data);
	}
	*/
	
	while(fscanf(fpp,"%s", data)!=EOF){
		printf("%s\n", data);
	}
	
	
	
	fclose(fpp);
	
	return 0;
}
