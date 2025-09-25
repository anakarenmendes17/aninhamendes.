#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do vinho: ");
    scanf("%d", &codigo);

    if (codigo >= 1 && codigo <= 2) {
        printf("Classificacao: De mesa\n");
    } else if (codigo >= 3 && codigo <= 4) {
        printf("Classificacao: Branco seco\n");
    } else if (codigo >= 5 && codigo <= 6) {
        printf("Classificacao: Branco doce\n");
    } else if (codigo >= 7 && codigo <= 8) {
        printf("Classificacao: Espumante\n");
    } else if (codigo > 10) {
        printf("Classificacao: Fortificado\n");
    } else {
        printf("Codigo invalido!\n");
    }

    return 0;
}
