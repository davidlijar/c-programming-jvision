#include <stdio.h>

int main() {
	int a[5]={0};
	int rank[5]={0};
	
	for(int i=0; i<5; i++){
		a[i]=0;
		rank[i]=1;
		scanf("%d", &a[i]);
	}	
	
	//rank algorithm
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(a[i]<a[j]){ //rank from highest to lowest
				rank[i]++;
			}
		}
	}
	
	
	
	
	for(int i=0; i<5; i++){
		printf("Rank of %d = %d\n", a[i], rank[i]);
	}
	
	return 0;
}
