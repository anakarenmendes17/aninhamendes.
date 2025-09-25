#include <stdio.h>

int main() {
    float preco, pago;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if(pago >= preco) {
        printf("Troco = %.2f\n", pago - preco);
    } else {
        printf("Dinheiro insuficiente! Faltam R$ %.2f\n", preco - pago);
    }

    return 0;
}
