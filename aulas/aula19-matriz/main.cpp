#include <iostream>

using namespace std;

int main() {
  int matriz[3][4];

  matriz[0][0] = 100;
  matriz[0][1] = 0;

  int l, c;

  for (l = 0; l < 3; l++) {
    for (c = 0; c < 4; c++) {
        matriz[l][c]=l;
    }
  }

  for (l = 0; l < 3; l++) {
    for (c = 0; c < 4; c++) {
        cout << matriz[l][c] << " ";
    }
        cout << "\n";
  }

  return 0;
}
