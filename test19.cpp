#include <stdio.h>
#include <string.h>


int main() {
	
	char ch[10];
	printf("Input character: ");
	scanf("%s", ch);
	
	int len = strlen(ch);
	
	//from first to last letter
	
	/*
	for(int i=0; i<len; i++){
		printf("%c\n", ch[i]);
	}
	*/
	
	
	//from last to first letter
	/*
	for(int i=len-1; i>=0; i--){
		printf("%c\n", ch[i]);
	}
	*/
	
	
	//small to capital letter OR capital to small letter
	for(int i=0; i<len; i++){
		
	
		
		if(ch[i] >= 'a' && ch[i]<='z'){
			ch[i] = ch[i]-32;
			
		}else if(ch[i]>='A' && ch[i]<='Z'){
			ch[i] = ch[i]+32;
			
		}else{
			ch[i] = ch[i];
		
		}
		printf("%c", ch[i]);
	}
	
	
	
	
	return 0;
}
