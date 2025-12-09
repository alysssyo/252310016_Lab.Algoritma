#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    int hasil = faktorial(angka);

    cout << "Faktorial dari " << angka << " adalah: " << hasil;

}

int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil; 
}
