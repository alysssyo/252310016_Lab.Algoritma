#include <iostream>
using namespace std;

int main() {
    float r;
    float phi = 3.14;
    float luas;

    cout << "Luas Lingkaran\n" << endl;
    cout << "Jari-jari: ";
    cin >> r;
    cout << "\nLuas lingkaran: pi x r x r" << endl;
    cout << "pi = " << phi << endl;
    cout << "r = " << r << endl;
    cout << phi << " x " << r << " x " << r << endl;
    luas = phi * r * r;
    cout << "\nHasil: " << luas << endl;
    return 0;
}

