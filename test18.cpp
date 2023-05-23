#include <stdio.h>
#include <string.h>

int main() {
	
	//배열 - Array
	//배열의 값은 [0]부터 시작된다
	//문자열은 문자배열과 동일하다
	//문자열은 실제 문자 수 + null 공간까지 필요하다. 
	
	 char ch[30], ch2[20], cha[20];
	 
	 //문자열 처리 함수 : strcpy(); , strlen(); , strcat(); , strcmp();
	 //ch ="aaa"; 안되 
	 strcpy(ch,"aaa"); 
	 strcpy(ch2,"bbb");
	strcat(ch2,ch);
	 int a = 30;
	 int b = a;
	 
	printf("이름을 입력하세요 : ");
	scanf("%s", ch);

	if(strcmp(ch, "선생님")==0){
		printf("안녕하세요!");
		 
	}else{
		printf("안녕");
	} 
	 
	 	
	
	return 0;
}
