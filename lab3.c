#include <stdio.h>
#include <math.h>

int main(){
	int x;
	printf("напишите число для проверки на четность\n");
	scanf("%d",&x);
	if (x%2==0)
		printf("число %d четное\n",x);
	else
		printf("число %d нечетное\n",x);
	return 0;
}
