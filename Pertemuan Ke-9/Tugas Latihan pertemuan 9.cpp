#include <iostream>
using namespace std;

int main() {
    int banyakJenis;
    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "-------------------------------------\n";
    cout << "Kode    Jenis       Harga\n";
    cout << "D       Dada        2500\n";
    cout << "P       Paha        2000\n";
    cout << "S       Sayap       1500\n";
    cout << "-------------------------------------\n";

    cout << "Banyak Jenis : ";
    cin >> banyakJenis;

    string jenis[20];
    int harga[20];
    int banyak[20];
    int jumlah[20];

    for (int i = 0; i < banyakJenis; i++) {
        cout << "\nJenis ke-" << i + 1 << endl;

        char kode;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kode;

        cout << "Banyak Potong        : ";
        cin >> banyak[i];

        if (kode == 'D' || kode == 'd') {
            jenis[i] = "Dada";
            harga[i] = 2500;
        } 
        else if (kode == 'P' || kode == 'p') {
            jenis[i] = "Paha";
            harga[i] = 2000;
        } 
        else if (kode == 'S' || kode == 's') {
            jenis[i] = "Sayap";
            harga[i] = 1500;
        } 
        else {
            jenis[i] = "Tidak diketahui";
            harga[i] = 0;
        }

        jumlah[i] = harga[i] * banyak[i];
    }

    // OUTPUT TANPA setw
    cout << "\n\nGEROBAK FRIED CHICKEN\n";
    cout << "-------------------------------------------------------------\n";
    cout << "No   Jenis      Harga    Banyak Beli     Jumlah Harga\n";
    cout << "-------------------------------------------------------------\n";

    int total = 0;
    for (int i = 0; i < banyakJenis; i++) {
        cout << i + 1 << "    "
             << jenis[i] << "       "
             << harga[i] << "          "
             << banyak[i] << "               "
             << jumlah[i] << endl;

        total += jumlah[i];
    }

    double pajak = total * 0.10;
    double totalBayar = total + pajak;

    cout << "-------------------------------------------------------------\n";
    cout <<"                                 "<< "Jumlah Bayar : Rp " << total << endl;
    cout <<"                                 "<< "Pajak 10%    : Rp " << pajak << endl;
    cout <<"                                 "<<"Total Bayar  : Rp " << totalBayar << endl;

    return 0;
}
