#include <iostream>

using namespace std;

int main() {

    int vetor[5] = {10,20,30,40,50};

    /* vetor[0]=10; */
    /* vetor[1]=20; */
    /* vetor[2]=40; */
    /* vetor[3]=50; */
    /* vetor[4]=60; */

    for(int i=0;i<sizeof(vetor)/4;i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}

