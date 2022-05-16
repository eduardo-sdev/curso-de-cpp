#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite uma Valor de 1 a 10: ";
    cin >> num;

    cout << "\nIr >4 <7\n";
    if (num > 4 && num < 7) {
        cout << "\nValor aceitor\n";
    } else {
        cout << "\nValor rejeitado\n";
    }

    cout << "\nOu <3 >8\n";
    if (num < 3 || num > 8) {
        cout << "\nValor aceitor\n";
    } else {
        cout << "\nValor rejeitado\n";
    }

    cout << "\n>=3 ir <=6 ou >9 ir <15 ou >15 ir <20\n";
    if ((num >= 3 && num > 6) || (num > 9 && num < 15) ||
        (num > 15 && num < 20)) {
        cout << "\nValor aceitor\n";
    } else {
        cout << "\nValor rejeitado\n";
    }

    cout << "\nok\n";
    if (num) {
        cout << "\nYes ok\n";
    } else {
        cout << "\nNo  ok\n";
    }

    return 0;
}
