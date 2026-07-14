#include <stdio.h>
#include "string_utils.h"

int main() {
    char text[] = "unipi";

    printf("Original: %s\n", text);

    if (is_palindrome(text)) {
        printf("Palindrome\n");
    } else {
        printf("Bukan palindrome\n");
    }

    reverse(text);
    printf("Reversed: %s\n", text);

    to_upper(text);
    printf("Uppercase: %s\n", text);

    return 0;
}