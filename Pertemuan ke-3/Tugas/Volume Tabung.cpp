#include <iostream>
using namespace std;

int main() 
{
    float r, t;
    float phi = 3.14;
    float luas;
    cout << "Volume Tabung\n" << endl;

    cout << "Jari-jari (r): ";
    cin >> r;
    cout << "Tinggi (t): ";
    cin >> t;
    cout << "\nRumus:" << endl;
    cout << "L = 2 x pi x r x (r + t)" << endl;
    cout << "pi = " << phi << endl;
    cout << "r = " << r << endl;
    cout << "t = " << t << endl;
    cout << "2 x " << phi << " x " << r << " x (" << r << " + " << t << ")" << endl;
    luas = 2 * phi * r * (r + t);
    cout << "\nHasil = " << luas << endl;
    return 0;
}
