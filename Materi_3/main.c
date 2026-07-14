#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main() {
    char str[100];

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    char temp[100];

    strcpy(temp, str);
    reverse(temp);
    printf("Reverse: %s\n", temp);

    if (is_palindrome(str)) {
        printf("Palindrome: Ya\n");
    } else {
        printf("Palindrome: Tidak\n");
    }

    strcpy(temp, str);
    to_upper(temp);
    printf("Uppercase: %s\n", temp);

    return 0;
}