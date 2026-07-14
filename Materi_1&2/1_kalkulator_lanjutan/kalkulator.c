#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_HISTORY 100

char history[MAX_HISTORY][100];
int jumlahHistory = 0;

void simpanHistory(char *catatan) {
    if (jumlahHistory < MAX_HISTORY) {
        strcpy(history[jumlahHistory], catatan);
        jumlahHistory++;
    } else {
        printf("History penuh, catatan lama tidak akan disimpan.\n");
    }
}

void tampilkanHistory() {
    if (jumlahHistory == 0) {
        printf("Belum ada riwayat perhitungan.\n");
        return;
    }

    printf("\n=== Riwayat Perhitungan ===\n");
    for (int i = 0; i < jumlahHistory; i++) {
        printf("%d. %s\n", i + 1, history[i]);
    }
    printf("===========================\n");
}

int main() {
    int pilihan;
    double a, b, hasil;
    char catatan[100];

    do {
        printf("\n=== KALKULATOR ===\n");
        printf("1. Tambah (+)\n");
        printf("2. Kurang (-)\n");
        printf("3. Kali (*)\n");
        printf("4. Bagi (/)\n");
        printf("5. Pangkat (**)\n");
        printf("6. Akar Kuadrat\n");
        printf("7. Lihat History\n");
        printf("0. Keluar\n");
        printf("Pilih operasi: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                hasil = a + b;
                printf("Hasil: %.2f\n", hasil);
                sprintf(catatan, "%.2f + %.2f = %.2f", a, b, hasil);
                simpanHistory(catatan);
                break;

            case 2:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                hasil = a - b;
                printf("Hasil: %.2f\n", hasil);
                sprintf(catatan, "%.2f - %.2f = %.2f", a, b, hasil);
                simpanHistory(catatan);
                break;

            case 3:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                hasil = a * b;
                printf("Hasil: %.2f\n", hasil);
                sprintf(catatan, "%.2f * %.2f = %.2f", a, b, hasil);
                simpanHistory(catatan);
                break;

            case 4:
                printf("Masukkan dua angka: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Error: pembagian dengan nol tidak diperbolehkan.\n");
                } else {
                    hasil = a / b;
                    printf("Hasil: %.2f\n", hasil);
                    sprintf(catatan, "%.2f / %.2f = %.2f", a, b, hasil);
                    simpanHistory(catatan);
                }
                break;

            case 5:
                printf("Masukkan basis dan pangkat: ");
                scanf("%lf %lf", &a, &b);
                hasil = pow(a, b);
                printf("Hasil: %.2f\n", hasil);
                sprintf(catatan, "%.2f ** %.2f = %.2f", a, b, hasil);
                simpanHistory(catatan);
                break;

            case 6:
                printf("Masukkan angka yang akan dicari akarnya: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("Error: tidak bisa menghitung akar dari bilangan negatif.\n");
                } else {
                    hasil = sqrt(a);
                    printf("Hasil: %.2f\n", hasil);
                    sprintf(catatan, "akar(%.2f) = %.2f", a, hasil);
                    simpanHistory(catatan);
                }
                break;

            case 7:
                tampilkanHistory();
                break;

            case 0:
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid.\n");
        }

    } while (pilihan != 0);

    return 0;
}
