#include <stdio.h>

char tentukanGrade(float nilai) {
    if (nilai >= 85 && nilai <= 100) {
        return 'A';
    } else if (nilai >= 70) {
        return 'B';
    } else if (nilai >= 55) {
        return 'C';
    } else if (nilai >= 40) {
        return 'D';
    } else if (nilai >= 0) {
        return 'E';
    } else {
        return 'X'; 
    }
}

int main() {
    int n, i;
    char nama[50];
    float nilai;
    char grade;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nMahasiswa ke-%d\n", i);

        printf("Nama: ");
        scanf("%s", nama);

        printf("Nilai: ");
        scanf("%f", &nilai);

        grade = tentukanGrade(nilai);

        if (grade == 'X') {
            printf("Nilai tidak valid\n");
        } else {
            printf("Nama: %s | Grade: %c\n", nama, grade);
        }
    }

    return 0;
}