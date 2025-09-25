#include <stdio.h>

int main() {
    int minutos;
    float valor = 50.0;

    printf("Digite a quantidade de minutos consumidos: ");
    scanf("%d", &minutos);

    if(minutos > 100) {
        valor += (minutos - 100) * 2.0;
    }

    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}
