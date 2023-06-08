#include <stdio.h>

void descendRank(int arr[], int size);
void ascendRank(int arr[], int size);

int main() {
	int numbers[]={56,78,23,41,12,34,23,98,54,67,53,24,53,42,13,21};
	
	int size = sizeof(numbers)/sizeof(int); 
	
	descendRank(numbers, size);
	ascendRank(numbers, size);
	
	return 0;
}

void descendRank(int arr[], int size){

	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(arr[j]>arr[i]){
				int temp;
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("Descended Rank : ");
	for(int i=0; i<size; i++){
		printf("%4d",arr[i]);
	}printf("\n");
	
}

void ascendRank(int arr[], int size){
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(arr[j]<arr[i]){
				int temp;
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("Ascended Rank : ");
	for(int i=0; i<size; i++){
		printf("%4d",arr[i]);
	}printf("\n");
	
}
