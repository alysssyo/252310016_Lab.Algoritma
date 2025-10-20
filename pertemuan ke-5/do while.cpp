#include <iostream>
using namespace std;

int main() {
    int n;
    char ulang;

    do {
        cout << "Masukkan angka: ";
        cin >> n;

        int i = 1;
        long long hasil = 1;

        while (i <= n) {
            hasil *= i;
            i++;
        }

        cout << n << "! = " << hasil << endl;

        cout << "Mau mencoba lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'y');

    cout << "==============================" << endl;

    return 0;
}

