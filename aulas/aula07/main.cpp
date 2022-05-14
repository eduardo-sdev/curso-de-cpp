#include <iostream>

using namespace std;

int main() {
    int number1,number2;

    number1 = 0;
    number2 = 10;

    cout << number1 << "\n\n";

    number1 += 1;

    cout << number1 << "\n\n";
    number1++;
    cout << number1 << "\n\n";
    number1--;
    cout << number1 << "\n\n";

    cout << number2++ << "\n\n";
    cout << ++number2 << "\n\n";
}

