#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c) {
        printf("Menor = %d\n", a);
    } else if(b <= a && b <= c) {
        printf("Menor = %d\n", b);
    } else {
        printf("Menor = %d\n", c);
    }

    return 0;
}
