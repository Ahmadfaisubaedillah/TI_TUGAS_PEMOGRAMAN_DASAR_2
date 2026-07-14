#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "string_utils.h"

// Membalik string (in-place)
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Cek apakah palindrome
int is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // bukan palindrome
        }
        left++;
        right--;
    }
    return 1; // palindrome
}

// Mengubah string ke huruf besar
void to_upper(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}