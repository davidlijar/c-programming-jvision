#include <stdio.h>


int main() {
	int a[5] = {0};
	int sum=0;
	int cnt=0;
	
	int max,min;
	
	for(int i=0; i<5; i++){
		a[i] = 0;
		scanf("%d",&a[i]);
		sum += a[i];
		
		if(a[i]>=80){
			cnt++;
		}
		
		max=a[0];
		min=a[0];
		
	//maximum number
	if(max<a[i]){
		max=a[i];
	}
	//minimum number
	if(min>a[i]){
		min=a[i];
	}
	}
	
	
	
	printf("\n\n***Before Sort***\n");
	for(int i=0; i<5; i++){
		printf("%d\t", a[i]);
	}
	printf("\nSum=%d\n", sum);
	printf("\n cnt=%d\n", cnt);
	printf("\n max=%d\n", max);
	printf("\n min=%d\n", min);
	
	//sort algorithm
	
	//Ascending sort
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(a[i] > a[j]){ //in case 5>3
				int temp = 0; //swap algorithm
				temp = a[j]; //temp=3
				a[j] = a[i]; //a[j]=5
				a[i] = temp; //a[i]=3
			}
		}
	}
	
	printf("\n\n***After Ascending Sort***\n");
	for(int i=0; i<5; i++){
		printf("%d\t", a[i]);
	}
	printf("\nSum=%d\n", sum);
	printf("\n cnt=%d\n", cnt);
	
	
	//Descending sort
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(a[i] < a[j]){ //in case 5>3
				int temp = 0; //swap algorithm
				temp = a[j]; //temp=3
				a[j] = a[i]; //a[j]=5
				a[i] = temp; //a[i]=3
			}
		}
	}
	printf("\n\n***After Descending Sort***\n");
	for(int i=0; i<5; i++){
		printf("%d\t", a[i]);
	}
	printf("\nSum=%d\n", sum);
	printf("\n cnt=%d\n", cnt);
	
	
	return 0;
}
