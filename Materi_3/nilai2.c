#include <stdio.h>

int main() {
    char nama[50];
    float nilai;

    printf("Masukkan nama mahasiswa: ");
    scanf("%s", nama);

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (nilai >= 85) {
        printf("Grade: A\n");
    } else if (nilai >= 70) {
        printf("Grade: B\n");
    } else if (nilai >= 55) {
        printf("Grade: C\n");
    } else if (nilai >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: E\n");
    }

    return 0;
}