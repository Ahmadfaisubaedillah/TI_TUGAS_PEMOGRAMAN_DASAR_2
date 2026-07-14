#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_MAHASISWA 200
#define PANJANG_NAMA 50

typedef struct {
    char nama[PANJANG_NAMA];
    float nilai;
    char grade;
} Mahasiswa;

char tentukanGrade(float nilai) {
    if (nilai >= 85) return 'A';
    if (nilai >= 70) return 'B';
    if (nilai >= 55) return 'C';
    if (nilai >= 40) return 'D';
    return 'E';
}

int main(int argc, char *argv[]) {
    const char *namaFile = "mahasiswa.csv";
    if (argc > 1) {
        namaFile = argv[1];
    }

    FILE *file = fopen(namaFile, "r");
    if (file == NULL) {
        printf("Gagal membuka file %s\n", namaFile);
        return 1;
    }

    Mahasiswa data[MAX_MAHASISWA];
    int jumlah = 0;
    char baris[100];
    int nomorBaris = 0;

    while (fgets(baris, sizeof(baris), file) != NULL) {
        nomorBaris++;

        // baris pertama dianggap header, dilewati
        if (nomorBaris == 1) {
            continue;
        }

        baris[strcspn(baris, "\r\n")] = '\0';

        if (strlen(baris) == 0) {
            continue;
        }

        char *token = strtok(baris, ",");
        if (token == NULL) continue;
        strncpy(data[jumlah].nama, token, PANJANG_NAMA - 1);
        data[jumlah].nama[PANJANG_NAMA - 1] = '\0';

        token = strtok(NULL, ",");
        if (token == NULL) continue;
        data[jumlah].nilai = atof(token);

        data[jumlah].grade = tentukanGrade(data[jumlah].nilai);

        jumlah++;
        if (jumlah >= MAX_MAHASISWA) {
            printf("Batas maksimum data tercapai (%d).\n", MAX_MAHASISWA);
            break;
        }
    }

    fclose(file);

    if (jumlah == 0) {
        printf("Tidak ada data mahasiswa yang terbaca.\n");
        return 1;
    }

    int jumlahA = 0, jumlahB = 0, jumlahC = 0, jumlahD = 0, jumlahE = 0;
    float totalNilai = 0;

    printf("%-20s %-10s %-5s\n", "Nama", "Nilai", "Grade");
    printf("--------------------------------\n");

    for (int i = 0; i < jumlah; i++) {
        printf("%-20s %-10.1f %-5c\n", data[i].nama, data[i].nilai, data[i].grade);

        totalNilai += data[i].nilai;

        switch (data[i].grade) {
            case 'A': jumlahA++; break;
            case 'B': jumlahB++; break;
            case 'C': jumlahC++; break;
            case 'D': jumlahD++; break;
            case 'E': jumlahE++; break;
        }
    }

    float rataRata = totalNilai / jumlah;

    printf("\n=== SUMMARY KELAS ===\n");
    printf("Jumlah mahasiswa : %d\n", jumlah);
    printf("Rata-rata kelas  : %.2f\n", rataRata);
    printf("Jumlah A         : %d\n", jumlahA);
    printf("Jumlah B         : %d\n", jumlahB);
    printf("Jumlah C         : %d\n", jumlahC);
    printf("Jumlah D         : %d\n", jumlahD);
    printf("Jumlah E         : %d\n", jumlahE);

    return 0;
}
