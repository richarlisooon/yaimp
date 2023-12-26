#include <stdio.h>
#include <math.h>

int sumcheck(int a,int b){
	if (a+b==69)
		return 100;
	else
		return 1;
}
int main(){
	int a;
	int b;
	printf("Сыграем в игру угадай сумму\n");
	printf("100 - угадал, 1 - не угадал\n");
	printf("Введите первое число\n");
	scanf("%d",&a);
	printf("Введите второе число\n");
        scanf("%d",&b);
	printf("%d\n",sumcheck(a,b));
}
