#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[25];
    float nilai;
};

int main() {
    int n;
    float total = 0;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    struct Mahasiswa *mhs;
    mhs = (struct Mahasiswa *) malloc(n * sizeof(struct Mahasiswa));

    for (int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Nama: ");
        scanf("%s", (mhs + i)->nama);

        printf("Nilai: ");
        scanf("%f", &(mhs + i)->nilai);

        total += (mhs + i)->nilai;
    }

    float rata = total / n;

    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Nama: %s, Nilai: %.2f\n",
               i + 1,
               (mhs + i)->nama,
               (mhs + i)->nilai);
    }

    printf("\nRata-rata nilai: %.2f\n", rata);

    free(mhs);

    return 0;
}