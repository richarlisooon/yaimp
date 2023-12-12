#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,D,x1,x2,rx,ix;
	scanf("%lf %lf %lf",&a,&b,&c);
	D=b*b-4*a*c;
	if (D==0){
		x1=-b/2*a;
		printf("уравнение иммет 1 корень x=%lf\n",x1);
	}
	else if (D>0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("корни уравнений x1=%lf x2=%lf\n",x1,x2);
	}
	else if (D<0) {
		rx=-b/(2*a);
		ix=sqrt(-D)/(2*a);
		printf("корни уравнения x1=%lf + %lfi x2=%lf - %lfi\n",rx,ix,rx,ix);
	}
	return 0;
}
