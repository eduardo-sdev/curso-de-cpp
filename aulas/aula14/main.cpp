#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int cont = 0;

    int cont2 = 20;

    while(n<10){
        cout << n << "\n";
        n++;
    }

    while(cont<10){
        cout << "Ok\n";
        cont++;
    }

    while(cont2>0){
        cout << "-Ok\n"<<cont2;
        cont2--;
    }

    cout << "Rotina Finalizada";

    return 0;
}

