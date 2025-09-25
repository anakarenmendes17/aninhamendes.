#include <stdio.h>
#include <math.h>

int main() {
    double r, area;
    const double PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);

    area = PI * pow(r, 2);

    printf("AREA = %.3lf\n", area);

    return 0;
}
