#include <iostream>
using namespace std;

void pangkatTiga(int *x) {
    *x = (*x) * (*x) * (*x);
}

int main() {
    int n;

    cout << "Masukkan nilai: ";
    cin >> n;

    pangkatTiga(&n);

    cout << "Hasil pangkat tiga: " << n << endl;

    return 0;
}
