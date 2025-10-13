#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;
    string hadiah;
    int kategori;

    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I : ";
    cin >> n1;
    cout << "Nilai Pertandingan II : ";
    cin >> n2;
    cout << "Nilai Pertandingan III : ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    // ubah rata-rata ke puluhan agar bisa dipakai di switch
    kategori = int(rata) / 10;

    switch (kategori) {
        case 10:
        case 9:
            hadiah = "Komputer Core i5";
            break;
        case 8:
            hadiah = "Uang sebesar Rp. 2.500,00.";
            break;
        default:
            hadiah = "Hiburan.";
    }

    cout << "Siswa yang bernama " << nama << endl;
    cout << fixed << setprecision(3);
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya" << endl;
    cout << "Hadiah yang didapat adalah " << hadiah << endl;

    return 0;
}

