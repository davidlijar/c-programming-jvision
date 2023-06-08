#include <stdio.h>

void change(int *p){
	*p *= 5;
}

int main() {
	
	int data[] = {1,2,3,4,5};
	
	int size = sizeof(data)/sizeof(int);
	
	for(int i=0; i<size; i++){
		change(&data[i]);
	}
	
	for(int i=0; i<size; i++){
		printf("%d ", data[i]);
	}
	
	return 0;
}


/*

void change(int *p,int size); //*p can be p[];

int main() {
	
	int data[] = {1,2,3,4,5};
	
	int size = sizeof(data)/sizeof(int);
	
	for(int i=0; i<size; i++){
		printf("%d ", data[i]);
	}printf("\n");
	
	change(data, size); //data is equal to &data[0];
	
	for(int i=0; i<size; i++){
		printf("%d ", data[i]);
	}

	return 0;
}

void change(int *p,int size){
	for(int i=0; i<size; i++){
		*(p+i)*=5;
		//p[i]*=5;
	}
}

*/
