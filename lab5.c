#include <stdio.h>
#include <math.h>
double pol(double a,double b, double c, double x){
	return a*pow(x,2)+b*x+c;
}

int main(){
	double a,b,c,x,t0,t1,t2,d10,d21,d2,j,k,t;
	printf("Введите коэфициенты полинома \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	t0=pol(a,b,c,0);
	t1=pol(a,b,c,1);
	t2=pol(a,b,c,2);
	printf("T(0)=%lf\n",t0);
	printf("T(1)=%lf\n",t1);
	printf("T(2)=%lf\n",t2);
	d10=t1-t0;
	d21=t2-t1;
	d2=d21-d10;
	printf("delta10=%lf\n",d10);
	printf("delta21=%lf\n",d21);
	printf("delta2=%lf\n",d2);
	j=d21;
	t=t2;
	for (int i=3;i<=100;i++){
		j+=d2;
		t+=j;
		printf("T(%d)=%lf\n",i,t);
	}
}

