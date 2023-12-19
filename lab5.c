#include <stdio.h>
#include <math.h>

double calcpol(double a, double b, double c, double x) {
	return (a * pow(x, 2)) + (b * x) + c;
}

int main() {
	double a, b, c;
	printf("Введите значения параметров a, b и c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	double t0 = calcpol(a, b, c, 0);
	double t1 = calcpol(a, b, c, 1);
	double t2 = calcpol(a, b, c, 2);

	double delta10 = t1 - t0;
	double delta21 = t2 - t1;
	double delta2 = delta21 - delta10;

	printf("T(0) = %.2lf\n", t0);
	printf("T(1) = %.2lf\n", t1);
	printf("T(2) = %.2lf\n", t2);
	printf("Δ_1,0 = %.2lf\n", delta10);
	printf("Δ_2,1 = %.2lf\n", delta21);
	printf("Δ^2 = %.2lf\n", delta2);

	int x;
	for (x = 3; x <= 100; x++) {
		double t = t2 + delta21 * (x - 2) + delta2 * (x - 2) * (x - 1)/2;
		printf("T(%d) = %.2lf\n", x, t);
	}
	return 0;
}
