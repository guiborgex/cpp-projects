#include <iostream>

using namespace std;

int main(){

    int x, y, troca;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    int soma = 0;
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    cout << "Soma dos impares: " << soma << endl;

    return 0;
}