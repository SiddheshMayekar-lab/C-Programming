// 7. Take characters as input until user enters ‘q’
#include <stdio.h>
int main() {
    char ch;
    do {
        printf("Enter char (q to quit): ");
        scanf(" %c", &ch);
    } while (ch != 'q');
    printf("Quit\n");
    return 0;
}
