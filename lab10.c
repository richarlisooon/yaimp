#include <stdio.h>
#include <math.h>

void pol(double a,double b,double c,double *x1, double *x2){
	double d=pow(b,2)-4*a*c;
	if (d==0){
		*x1=-b/(2*a);
		*x2=*x1;
	}
	else if (d>0){
		*x1=(-b+sqrt(d))/(2*a);
		*x2=(-b-sqrt(d))/(2*a);
	}
	else if (d<0){
		*x1=NAN;
		*x2=NAN;
	}
}
int main(){
	double a,b,c;
	printf("Напишите коэфициенты для квадратного уравнения\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	double x1,x2;
	pol(a,b,c,&x1,&x2);
	if (isnan(x1) && isnan(x2))
		printf("Корни являются комплексными\n");
	else if (a==0 || b==0 || c==0)
		printf("По-моему,это не полином\n");
	else
		printf("Корни уравнения x1=%lf x2=%lf\n",x1,x2);
	return 0;
}
