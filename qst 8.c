#include <stdio.h>

int main() {
    char escala;
    double temp, convertido;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf(" %c", &escala);

    if(escala == 'C' || escala == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temp);
        convertido = (temp * 9/5) + 32;
        printf("Temperatura em Fahrenheit: %.2lf\n", convertido);
    } else {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temp);
        convertido = (temp - 32) * 5/9;
        printf("Temperatura em Celsius: %.2lf\n", convertido);
    }

    return 0;
}
