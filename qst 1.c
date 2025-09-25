#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a nota do 1º semestre: ");
    scanf("%f", &n1);
    printf("Digite a nota do 2º semestre: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2.0;

    printf("Media final = %.2f\n", media);

    if(media < 6.0) {
        printf("REPROVADO\n");
    } else {
        printf("APROVADO\n");
    }

    return 0;
}
