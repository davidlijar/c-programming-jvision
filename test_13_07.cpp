#include <stdio.h>

void f(int x);

int main() {
	int n;
	
	scanf("%d", &n);
	f(n);
	
	
	return 0;
}

void f(int n){
	char ch[n];
	
	for(int i=0; i<n; i++){
		//i =0 , ch[0]= 65+0=65=A
		//i=1, ch[1]=65+1; 66=B;
		//i=2, ch[2]=65+2; 67=C;
		///
		///
		//i=10; ch[10]=65+9=74=J
		ch[i] = 'A'+i;
	}
	printf("%s",ch);
	
}
