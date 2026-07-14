#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char baris[100];
    double a, b, hasil;
    char operator;
    int cocok;

    printf("=== KALKULATOR EKSPRESI ===\n");
    printf("Format input: (3 + 4) atau 3 + 4\n");
    printf("Ketik 'q' untuk keluar.\n\n");

    while (1) {
        printf(">> ");

        if (fgets(baris, sizeof(baris), stdin) == NULL) {
            break;
        }

        // hapus newline di akhir input
        baris[strcspn(baris, "\n")] = '\0';

        // cek apakah user ingin keluar
        char cekKeluar[10];
        strncpy(cekKeluar, baris, 9);
        cekKeluar[9] = '\0';
        for (int i = 0; cekKeluar[i]; i++) {
            cekKeluar[i] = tolower(cekKeluar[i]);
        }
        if (strcmp(cekKeluar, "q") == 0) {
            printf("Program selesai.\n");
            break;
        }

        // coba parsing dengan format berkurung dulu, misalnya (3 + 4)
        cocok = sscanf(baris, " ( %lf %c %lf )", &a, &operator, &b);

        // kalau tidak cocok, coba format tanpa kurung, misalnya 3 + 4
        if (cocok != 3) {
            cocok = sscanf(baris, " %lf %c %lf", &a, &operator, &b);
        }

        if (cocok != 3) {
            printf("Input tidak valid. Gunakan format: (angka operator angka)\n");
            continue;
        }

        switch (operator) {
            case '+':
                hasil = a + b;
                break;
            case '-':
                hasil = a - b;
                break;
            case '*':
                hasil = a * b;
                break;
            case '/':
                if (b == 0) {
                    printf("Error: pembagian dengan nol tidak diperbolehkan.\n");
                    continue;
                }
                hasil = a / b;
                break;
            default:
                printf("Operator '%c' tidak dikenali.\n", operator);
                continue;
        }

        printf("Hasil: %.2f\n", hasil);
    }

    return 0;
}
