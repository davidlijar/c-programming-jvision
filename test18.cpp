#include <stdio.h>
#include <string.h>

int main() {
	
	//�迭 - Array
	//�迭�� ���� [0]���� ���۵ȴ�
	//���ڿ��� ���ڹ迭�� �����ϴ�
	//���ڿ��� ���� ���� �� + null �������� �ʿ��ϴ�. 
	
	 char ch[30], ch2[20], cha[20];
	 
	 //���ڿ� ó�� �Լ� : strcpy(); , strlen(); , strcat(); , strcmp();
	 //ch ="aaa"; �ȵ� 
	 strcpy(ch,"aaa"); 
	 strcpy(ch2,"bbb");
	strcat(ch2,ch);
	 int a = 30;
	 int b = a;
	 
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", ch);

	if(strcmp(ch, "������")==0){
		printf("�ȳ��ϼ���!");
		 
	}else{
		printf("�ȳ�");
	} 
	 
	 	
	
	return 0;
}
