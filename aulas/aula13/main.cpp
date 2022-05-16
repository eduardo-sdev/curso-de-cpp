#include <iostream>

using namespace std;

int main() {
    int val;

    cout << "1 2 = green, 3 4 = blue, 5 6 = red";
    cout << "\nSelect Color: ";

    cin >> val;

    switch (val) {
        case 1:
        case 2:
            switch (val) {
                case 1:
                    cout << "Color: green v1\n";
                    break;
                case 2:
                    cout << "Color: green v2\n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Color: blue\n";
            break;
        case 5:
        case 6:
            cout << "Color: red\n";
            break;
        default:
            cout << "Not color select... [1,2,3]";
    }

    return 0;
}
