#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;
    string hadiah;

    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : ";
    cin >> n1;
    cout << "Nilai Pertandingan II : ";
    cin >> n2;
    cout << "Nilai Pertandingan III : ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    if (rata >= 80) {
        if (rata >= 90)
            hadiah = "Komputer Core i5";
        else
            hadiah = "Uang sebesar Rp. 2.500,00.";
    } else {
        hadiah = "Hiburan.";
    }

    cout << "Siswa yang bernama " << nama << endl;
    cout << fixed << setprecision(3);
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya" << endl;
    cout << "Hadiah yang didapat adalah " << hadiah << endl;

    return 0;
}

