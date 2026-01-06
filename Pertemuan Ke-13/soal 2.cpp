#include <stdio.h>

void validasiNilai(int *nilai) {
    if (*nilai < 0) {
        *nilai = 0;
    } else if (*nilai > 100) {
        *nilai = 100;
    }
}

int main() {
    int angka;

    printf("Masukkan nilai: ");
    scanf("%d", &angka);

    validasiNilai(&angka);

    printf("Nilai setelah validasi: %d\n", angka);

    return 0;
}
