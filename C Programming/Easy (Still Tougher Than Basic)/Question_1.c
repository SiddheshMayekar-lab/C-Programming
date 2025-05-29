// 1. Count lowercase, uppercase, digits, and special characters in a string
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int lower = 0, upper = 0, digit = 0, special = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) lower++;
        else if (isupper(str[i])) upper++;
        else if (isdigit(str[i])) digit++;
        else special++;
    }
    printf("Lowercase: %d, Uppercase: %d, Digits: %d, Special: %d\n", lower, upper, digit, special);
    return 0;
}


