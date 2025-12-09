#include <iostream>
using namespace std;

int hitung(int n);

int main() {
    int a = 5;
    cout << "jumlah faktorial = " << hitung(a);
}

int hitung(int n) {
    int x = 1;
    for (int i = n; i >= 1; i--) {
        x *= i;
    }
    return x;
}

