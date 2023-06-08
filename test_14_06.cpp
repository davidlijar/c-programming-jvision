#include <stdio.h>

void printData(int *p);
void swap(int *x,int *y);
void ascSort(int *p);


int main() {
	
	int data[]={18,45,95,5,32};
	
	printData(data);
	
	ascSort(data);
	
	
	printData(data);
	
	return 0;
}

void printData(int *p){
	for(int i=0; i<5; i++){
		printf("%d ",*(p+i));
	}printf("\n");
}
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	
}
void ascSort(int *p){
	//ascending sort
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(p[i]>p[j]){
				swap(&p[i],&p[j]);
			}
		}
	}
}

