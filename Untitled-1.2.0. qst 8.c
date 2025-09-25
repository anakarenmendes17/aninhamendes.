#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int numero) {
    int ocorrencias = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                ocorrencias++;
            }
        }
    }
    return ocorrencias;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 1, 6, 1},
        {7, 8, 1, 9},
        {1, 2, 3, 4}
    };
    int numero;
    printf("Digite o numero a procurar: ");
    scanf("%d", &numero);

    printf("O numero %d aparece %d vezes na matriz.\n",
           numero, contarOcorrencias(matriz, numero));

    return 0;
}
