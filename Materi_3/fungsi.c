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
    float nilai;
    char grade;

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    grade = tentukanGrade(nilai);

    if (grade == 'X') {
        printf("Nilai tidak valid\n");
    } else {
        printf("Grade: %c\n", grade);
    }

    return 0;
}