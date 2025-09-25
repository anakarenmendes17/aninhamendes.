#include <stdio.h>

int main() {
    int cod, qtd;
    float preco;

    printf("Codigo do produto comprado: ");
    scanf("%d", &cod);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if(cod == 1) preco = 5.00;
    else if(cod == 2) preco = 3.50;
    else if(cod == 3) preco = 4.80;
    else if(cod == 4) preco = 8.90;
    else if(cod == 5) preco = 7.32;
    else {
        printf("Codigo invalido!\n");
        return 0;
    }

    printf("Valor a pagar: R$ %.2f\n", preco * qtd);

    return 0;
}
