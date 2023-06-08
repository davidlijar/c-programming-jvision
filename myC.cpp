#include <stdio.h>

int f(int x, int y);
void f1(int x);
void f3(int x);
void grade(int x);
void factorial(int x);
void numOfAlphabet(int x);

int main() {
	int n;
	scanf("%d",&n);
	numOfAlphabet(n);
	
	
	
	return 0;
}

void numOfAlphabet(int x){
	char alphabetArr[x];
	
	for(int i=0; i<x; i++){
		alphabetArr[i] = 'A'+i;
	}
	printf("%d Alphabet are %s ",x,alphabetArr);
	
}

void factorial(int x){
	int fac=1;
	for(int i=x; i>0; i--){
		fac*=i;
	}
	printf("Factorial of %d is %d", x,fac);
}

void grade(int x){
	char grade;
	if(x>=90){
		grade='A';
	}else if(x>=80){
		grade='B';
	}else if(x>=70){
		grade='C';
	}else if(x>=60){
		grade='D';
	}else{
		grade='F';
	}
	
	printf("This student got %c", grade);
}

int f(int x, int y){
	int sum=0;
	
	for(int i=x; i<=y; i++){
		sum += i;
	}
	
	return sum;
}

void f1(int x){
	if(x%2==0){
		printf("It's even number");
	}else{
		printf("It's odd number");
	}
}

void f3(int x){
	if(x>=2 && x<=9){
		for(int i=1; i<=9; i++){
			printf("%d x %d = %d \n", x,i,x*i);
		}
	}else{
		printf("it's out of range, only between 2 and 9'");
	}
}
