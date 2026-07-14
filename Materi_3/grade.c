#include <stdio.h>

int main() {
    float nilai;

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (nilai >= 85 && nilai <= 100) {
        printf("Grade: A\n");
    } else if (nilai >= 70) {
        printf("Grade: B\n");
    } else if (nilai >= 55) {
        printf("Grade: C\n");
    } else if (nilai >= 40) {
        printf("Grade: D\n");
    } else if (nilai >= 0) {
        printf("Grade: E\n");
    } else {
        printf("Nilai tidak valid\n");
    }

    return 0;
}