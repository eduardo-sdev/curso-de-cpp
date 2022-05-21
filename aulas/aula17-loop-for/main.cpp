#include <iostream>

using namespace std;

int main()
{
    int num, x, y, z;

    for (num = 0; num <= 10; num++)
        cout << num << "\n";

    cout << "\n";

    for (x = 0, y = 1, z = 0; x <= 10 && z <= 15; x++, y += 2, z += 2)
        cout << x << " - " << y << " - " << z << "\n";

    return 0;
}
