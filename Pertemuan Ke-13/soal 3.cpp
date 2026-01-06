#include <stdio.h>

#define UMR 3000000   

struct Pegawai {
    char nama[50];
    char jabatan[50];
    int gaji;
};

int main() {
    struct Pegawai p;

    printf("Masukkan nama pegawai   : ");
    fgets(p.nama, sizeof(p.nama), stdin);

    printf("Masukkan jabatan        : ");
    fgets(p.jabatan, sizeof(p.jabatan), stdin);

    printf("Masukkan gaji           : ");
    scanf("%d", &p.gaji);

    printf("\n--- Data Pegawai ---\n");
    printf("Nama    : %s", p.nama);
    printf("Jabatan : %s", p.jabatan);
    printf("Gaji    : %d\n", p.gaji);

    if (p.gaji >= UMR) {
        printf("Gaji pegawai diatas UMR\n");
    } else {
        printf("Gaji pegawai dibawah UMR\n");
    }

    return 0;
}
