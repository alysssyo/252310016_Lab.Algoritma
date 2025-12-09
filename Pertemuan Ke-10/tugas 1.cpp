#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kalimat, char target) {
    int jumlah = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == target) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kalimat;
    char karakter;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Karakter yang ingin dihitung: ";
    cin >> karakter;

    int hasil = hitungKarakter(kalimat, karakter);

    cout << "Jumlah karakter '" << karakter << "' = " << hasil << endl;

    return 0;
}

