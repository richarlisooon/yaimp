#include <stdio.h>
#include <math.h>

double calp(double a, double b, double c, double x) {
    return (a * pow(x, 2)) + (b * x) + c;
}

int main(){
    double a, b, c;
    printf("Введите значения параметров a, b и c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("T(0) = %.2lf\n", calp(a, b, c, 0));
    printf("T(1) = %.2lf\n", calp(a, b, c, 1));
    printf("T(2) = %.2lf\n", calp(a, b, c, 2));
    double d10 = calp(a, b, c, 1) - calp(a, b, c, 0);
    double d21 = calp(a, b, c, 2) - calp(a, b, c, 1);
    double d2 = d21 - d10;
    printf("Δ₁₀ = %.2lf\n", d10);
    printf("Δ₂₁ = %.2lf\n", d21);
    printf("Δ² = %.2lf\n", d2);
    int x;
    for (x = 3; x <= 100; x++) {
        printf("T(%d) = %.2lf\n", x, calp(a, b, c, x));
    }
    return 0;
}
