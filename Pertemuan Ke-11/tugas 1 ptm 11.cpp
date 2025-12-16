#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    cout << endl;
    cout << "sebelum ditukar:" << endl;
    cout << "A= " << A << ", B= " << B << endl;

    tukar(&A, &B);

    cout << endl;
    cout << "setelah ditukar:" << endl;
    cout << "A= " << A << ", B= " << B << endl;

    return 0;
}

