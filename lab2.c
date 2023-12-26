#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,D,x1,x2,rx,ix;
	scanf("%lf %lf %lf",&a,&b,&c);
	D=b*b-4*a*c;
	if (a==0 && b==0 && c==0){
		printf("Бесконечно много решений\n");
	}
	else if (a==0 && b==0){
		printf("Нет корней\n");
	}
	else if (a==0 && c==0){
                printf("Уравнение имеет 1 корень x1=0\n");
        }
	else if (b==0 && c==0){
		printf("Уравнение имеет 1 корень x1=0\n");
	}
	else if (a==0){
		printf("Уравнение имеет 1 корень равный %lf\n",b/c);
	}
	else if (b==0){
		if (-c/a>0){
			printf("Уравнение имеет 2 корня x1=%lf x2=%lf\n",sqrt(-c/a),+sqrt(-c/a));
		}
		else {
			printf("Уравнение имеет 2 корня x1=%lfi x2=%lfi\n",sqrt(c/a),+sqrt(c/a));
		}
	}
	else if (c==0){
		printf("Уравнение имеет 2 корня x1=0 x2=%lf\n",-b/a);
	}
	else {
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
	}
	return 0;
}
