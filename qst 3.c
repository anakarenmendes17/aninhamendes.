#include <stdio.h>

int main() {
    int codigo, tipoViagem;
    float valor, total;

    printf("Digite o codigo do destino (1=Morros, 2=Barreirinhas, 3=Bacabal): ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1: valor = 120.00; break;
        case 2: valor = 200.00; break;
        case 3: valor = 60.00; break;
        default: printf("Codigo invalido!\n"); return 0;
    }

    printf("Digite o tipo de viagem (1=Ida, 2=Ida e volta): ");
    scanf("%d", &tipoViagem);

    if (tipoViagem == 1) {
        total = valor;
    } else if (tipoViagem == 2) {
        total = valor * 2 * 0.90; // 10% desconto
    } else {
        printf("Tipo invalido!\n");
        return 0;
    }

    printf("Valor total da passagem: R$ %.2f\n", total);

    return 0;
}
