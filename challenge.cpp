#include <stdio.h>

int main(){

int i, j,n;
printf("Input Number: ");
scanf("%d", &n);

int toPlus = (n - 1);
int init = (n - (n-1));

for (i = 1; i <= n; i++){
int sum = init;
printf("%d ", init);

for (j = 2; j <= i;j++){

printf("%d ", sum += toPlus);
toPlus--;





}
init++;
toPlus = (n - 1);
printf("\n");
}

return 0;
}
