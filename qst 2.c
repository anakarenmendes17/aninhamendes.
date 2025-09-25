#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b - 4*a*c;

    if(delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Raizes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
