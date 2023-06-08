#include <stdio.h>

void f1();
void f2();

void f3();

int main() {
	
	
	f3();
	
	
	
	return 0;
}

void f3(){
	int data[] = {5,6,4,3,7};
	int rank[]={0};
	
	//initial rank
	for(int i=0; i<5; i++){
		rank[i]=1;
	}
	
	//search greater values than self and uprank
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(data[i]<data[j]){
				rank[i]++;
			}
		}
	}
	
	for(int i=0; i<5; i++){
		printf("Num : %d, Rank : %d\n", data[i],rank[i]);
	}
}

void f2() {
	int col,row;
	
	printf("Input numbers of col : ");
	scanf("%d", &col);
	row = 2*col-1;

	int data[row][col]={0};
	
	int start = col-1; //mid point
	int end = col-1;
	int k=0;
	
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
				printf("%3d", data[i][j]);
			}
			
		}printf("\n");
	}
	
	
}

void f1() {
	int a[5][5] = {0};
	int k=0;
	int s=0,e=4;
	
		
		for(int i=0; i<5; i++){
			if(i<3){
				for(int j=s; j<=e; j++){
				a[i][j]=++k;
			}e--;
			}else{
				if(e<3){
					e=3;
				}
				
				for(int j=s; j<=e; j++){
					a[i][j]=++k;
				}e++;
			}
			
		}
		
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				if(a[i][j]==0){
					printf("   ");
				}else{
					printf("%3d", a[i][j]);
				}
				
				
			} printf("\n");
		}
}
