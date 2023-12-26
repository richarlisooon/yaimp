#include <stdio.h>
#include <math.h>
long int fact(int n){
	if (n==1)
		return 1;
	if (n>1)
		return n*fact(n-1);
}
int main(){
	int a;
	printf("Напишите число\n");
	scanf("%d",&a);
	printf("%d! = %ld\n",a,fact(a));
	return 0;
}
