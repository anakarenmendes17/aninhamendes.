#include <stdio.h>

int somaLinha5x5(int matriz[5][5], int linha) {
    int soma = 0;
    for(int j = 0; j < 5; j++) {
        soma += matriz[linha][j];
    }
    return soma;
}

int main() {
    int mat[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int linha = 2; // terceira linha (índice 2)
    printf("Soma da linha %d: %d\n", linha, somaLinha5x5(mat, linha));
    return 0;
}
