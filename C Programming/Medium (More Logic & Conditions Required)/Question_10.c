#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int a=0, e=0, i=0, o=0, u=0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int j = 0; str[j]; j++) {
        char ch = tolower(str[j]);
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    int max = a, index = 'a';
    if (e > max) { max = e; index = 'e'; }
    if (i > max) { max = i; index = 'i'; }
    if (o > max) { max = o; index = 'o'; }
    if (u > max) { max = u; index = 'u'; }

    printf("Most frequent vowel: %c (%d times)\n", index, max);
    return 0;
}
