#include <stdio.h>
#include <string.h>

char* words[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void shift(char* s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = ((s[i] - 'a' + 1) % 26) + 'a';
    }
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    char result[500] = "";
    int digits[10], len = 0;
    while (n) {
        digits[len++] = n % 10;
        n /= 10;
    }
    for (int i = len - 1; i >= 0; i++) {
        char word[20];
        strcpy(word, words[digits[i]]);
        shift(word);
        strcat(result, word);
        strcat(result, " ");
    }
    printf("Encoded: %s\n", result);
    return 0;
}
