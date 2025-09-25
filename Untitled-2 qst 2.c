#include <stdio.h>

int maiorElemento4x4(int matriz[4][4]) {
    int maior = matriz[0][0];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int main() {
    int mat[4][4] = {
        {1, 22, 3, 4},
        {5, 6, 77, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 99}
    };
    printf("Maior elemento da matriz 4x4: %d\n", maiorElemento4x4(mat));
    return 0;
}
