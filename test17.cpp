#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
	
	int ch = 0, q;
	//scanf("%c", &ch);

	//ch = getch();

	int p=25;
	while(1){
		
	for(int i=1; i<=50;i++){
		if(i==p){
			printf("#");	
		}else{
			printf(" ");
		}
		
		
	}
	printf("\n");	
	ch = getch();
		switch(ch){
			case 'a':
				p--;
				break;
			case 'd':
				p++;
				break;
			case 'r':
				system("cls");
			case 'q':
				return 0;
			default:
			p=25;
		}
			
		
			
	}


	
	return 0;
}
