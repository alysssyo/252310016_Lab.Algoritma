#include <iostream>
#include <conio.h>  
using namespace std;

int main() {
    int a, b;
    char lagi;

    do {
        system("cls"); 

        cout << "Masukkan Bilangan = ";
        cin >> a;

        b = a % 2;

        cout << "Nilai " << a << " % 2 adalah = " << b;
        cout << "\n\nIngin Hitung Lagi [Y/T] : ";

        lagi = getche(); 
        cout << endl;

    } while (lagi == 'Y' || lagi == 'y'); 

    getch(); 
    return 0;
}
