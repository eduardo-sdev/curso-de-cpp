#include <iostream>

using namespace std;

int n1, n2;

int main() {
    //
    // Operatores: + - / * % ()
    //

    int n3, n4;
    int res, res1, res2;

    n1=65;
    n2=75;
    n3=85;
    n4=95;

    res=n1+n2+n3+n4;
    cout << "Soma:" << res << "\n\n";

    res=(n1+n2+n3-n4)-21;
    cout << "Conta Matematica:" << res << "\n\n";

    res=n1+n2*n3/n4;
    cout << "Conta Matematica:" << res << "\n\n";

    res1=n1/n4;
    res2=n1%n4;
    cout << "Dividir:" << res1 << "\n";
    cout << "resto:" << res2 << "\n";

    return 0;
}

