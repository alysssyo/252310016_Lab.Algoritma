#include <iostream>
using namespace std;

float konversiSuhu(float nilai, char dari, char ke) {
    float hasil = nilai;

    // Ubah dulu ke Celcius
    if (dari == 'F') hasil = (nilai - 32) * 5.0 / 9.0;
    else if (dari == 'K') hasil = nilai - 273.15;

    // Dari Celcius ke tujuan
    if (ke == 'F') return (hasil * 9.0 / 5.0) + 32;
    else if (ke == 'K') return hasil + 273.15;

    return hasil; // jika ke 'C'
}

int main() {
    float angka;
    char dari, ke;

    cout << "Jenis suhu awal (C/F/K): ";
    cin >> dari;
    cout << "Masukkan nilai suhu: ";
    cin >> angka;

    cout << "Jenis suhu tujuan (C/F/K): ";
    cin >> ke;

    float hasil = konversiSuhu(angka, dari, ke);

    cout << "Hasil konversi: " << hasil << " " << ke << endl;

    return 0;
}

