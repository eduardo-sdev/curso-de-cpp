#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n1,n2,res;
    char opc;

    inicio:

    system('cls');

    cout << "Digite o valor na nota 1: ";
    cin >> n1;
    cout << "Digite o valor na nota 2: ";
    cin >> n2;

    res=n1+n2;

    if(res >= 6){
        cout << "\nAluno Aprovado\n";
    }else if(res >= 4){
        cout << "\nAluno Recoperação\n";
    } else {
        cout << "\nAluno Reprovador\n";
    }

    cout << "\nDigita Outra Nota? [s/n]: \n";
    cin >> opc;

    if (opc == 's' or opc == 'S') {
        goto inicio;
    }

    return 0;
}

