#include <stdio.h>

void transposta3x2(int matriz[3][2], int transposta[2][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    int t[2][3];

    transposta3x2(mat, t);

    printf("Matriz transposta (2x3):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
