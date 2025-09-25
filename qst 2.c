#include <stdio.h>

int main() {
    int codigo;
    float valor, desconto;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);

    printf("Digite o codigo (1=visitante, 2=aluno): ");
    scanf("%d", &codigo);

    if (codigo == 1) { // visitante
        desconto = valor * 0.05;
    } else if (codigo == 2) { // aluno
        desconto = valor * 0.10;
    } else {
        printf("Codigo invalido!\n");
        return 0;
    }

    printf("Valor a pagar: R$ %.2f\n", valor - desconto);

    return 0;
}
