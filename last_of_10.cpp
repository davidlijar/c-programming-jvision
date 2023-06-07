#include <stdio.h>

int main() {
	
	int row,col;
	
	printf("Input numbers of column : ");
	scanf("%d", &col);
	row = 2*col - 1;
	int data[row][col]={0};
	int k=0;
	int start=col-1;
	int end = col-1;
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			data[i][j]=0;
		}
	}
	
	for(int i=0; i<col; i++){
		for(int j=start; j<=end; j++){
			data[j][i] = ++k;
		}start--;end++;
	}
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(data[i][j]==0){
				printf("   ");
			}else{
				printf("%3d",data[i][j]);
			}
			
		}printf("\n");
	}
	
	
	return 0;
}
