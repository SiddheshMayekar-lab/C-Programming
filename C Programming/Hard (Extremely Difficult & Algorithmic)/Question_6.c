#include <stdio.h>

int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
char* romans[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 0; i < 13; i++) {
        while (n >= values[i]) {
            printf("%s", romans[i]);
            n -= values[i];
        }
    }
    printf("\n");
    return 0;
}
