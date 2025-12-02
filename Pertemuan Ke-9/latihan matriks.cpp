#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    // Input nilai matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukkan nilai matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Output hasil matriks
    cout << "Hasil matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

