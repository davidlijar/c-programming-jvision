#include <stdio.h>

int* f(int *name1, int size){
	for(int i=0; i<size; i++){
		*(name1+i)+=1;
	}
	
	return name1;
}


int main() {
	
	int arr1[]={1,2,3};
	int arr2[]={4,5,6,7};
	
	//for(int i=0; i<)
	int size1 = sizeof(arr1)/sizeof(int);
	int size2 = sizeof(arr2)/sizeof(int);
	
	for(int i=0; i<size1; i++){
		printf("%d ", arr1[i]);
	}printf("\n");
	
	int *result = f(arr1, size1); //try change arr1 with arr2, size1 with size2;
	
	for(int i=0; i<size1; i++){
		printf("%d ", *(result+i)); //same with result[i] cause *result is first of result array
		
	}printf("\n");
	
	for(int i=0; i<size1; i++){
		 //same with result[i] cause *result is first of result array
		printf("%d ", arr1[i]);
	}printf("\n");
	
	
	
	return 0;
}
