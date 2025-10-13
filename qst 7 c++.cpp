#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valorHora, horas, pagamento;

    cin >> nome;
    cin >> valorHora >> horas;

    pagamento = valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;

    return 0;
}

