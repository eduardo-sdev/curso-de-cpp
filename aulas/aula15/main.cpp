#include <iostream>

using namespace std;

int main() {
    int cont;

    cont = 0;

    while (cont < 100) {
        cout << cont << "\n";
        cont++;

        if(cont == 51){
            break;
        }
    }

    return 0;
}
