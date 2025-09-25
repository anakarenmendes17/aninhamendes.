#include <stdio.h>

int main() {
    int tipoUsuario, qtdeLivros;

    printf("Digite o tipo de usuario (1=Professor, 2=Aluno): ");
    scanf("%d", &tipoUsuario);

    printf("Digite a quantidade de livros que deseja emprestar: ");
    scanf("%d", &qtdeLivros);

    if ((tipoUsuario == 1 && qtdeLivros <= 5) || (tipoUsuario == 2 && qtdeLivros <= 3)) {
        printf("Emprestimo permitido!\n");
    } else {
        printf("Emprestimo nao permitido!\n");
    }

    return 0;
}
