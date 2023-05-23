#include <stdio.h>
#include <conio.h>
#include <windows.h>


int main() {
	int p_x=3, p_y=3;
	
	while(1){
		for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			if(j==p_x && i==p_y){
				printf("*");
				
			}else{
				printf("0");
			}
		}
		printf("\n");
		
	}
	
	char ch = getch();
	switch(ch){
		case 'a':
			p_x--;
			break;
		case 'd':
			p_x++;
			break;
		case 'w':
			p_y--;
			break;
		case 's':
			p_y++;
			break;
		case 'q': //click 'q' to quit
			return 0; 
	}
	
	if(p_x<1){
		p_x=1;
	}else if(p_x>5){
		p_x=5;
	}
	else if(p_y>5){
		p_y=5;
	}else if(p_y<1){
		p_y=1;
	}
	
	system("cls");

	}
	
	
	
	
	
	
	return 0;
}
