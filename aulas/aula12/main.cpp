#include <iostream>

using namespace std;

int main() {
    int n1, n2, nota, x;

    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "\nDigite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;
    x = n1;

    /* (nota >= 6) ? res = "Aprovado" : res = "Reprovado"; */
    res = (nota >= 6) ? "Aprovado" : "Reprovado";

    (n1 >= 10) ? x++ : x--;

    cout << "\nSituação do aluno: " << res << "\n";
    cout << "\nSituação da primeira nota: " << x << "\n";

    return 0;
}
