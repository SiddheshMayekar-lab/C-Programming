#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0, len = 0, count = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i]) {
        if (!isspace(str[i]) && str[i] != '\0')
            len++;
        else if (len > 0) {
            if (len % 2 == 0)
                count++;
            len = 0;
        }
        i++;
    }
    if (len > 0 && len % 2 == 0) count++; // for last word
    printf("Even-length words: %d\n", count);
    return 0;
}
