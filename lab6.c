#include <stdio.h>
#include <math.h>
long int fact(int a){
	if (a==1)
		return 1;
	if (a>1)
		return a*fact(a-1);
}
int main(){
	int a;
	printf("Напишите число\n");
	scanf("%d",&a);
	printf("%d! = %ld\n",a,fact(a));
	return 0;
}
