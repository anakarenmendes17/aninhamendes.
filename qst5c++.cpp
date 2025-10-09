#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unitario, dinheiro;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco_unitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    double total = preco_unitario * quantidade;
    double troco = dinheiro - total;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
