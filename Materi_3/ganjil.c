#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &angka);

    if (angka % 2 == 0) {
        printf("Bilangan tersebut adalah GENAP\n");
    } else {
        printf("Bilangan tersebut adalah GANJIL\n");
    }

    return 0;
}