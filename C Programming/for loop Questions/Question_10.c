// 10. Print ASCII values of A–Z
#include <stdio.h>
int main() {
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c = %d\n", c, c);
    }
    return 0;
}