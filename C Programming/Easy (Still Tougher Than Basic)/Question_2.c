// 2. Find smallest and largest digits in a number
#include <stdio.h>
int main() {
    int num, digit, min = 9, max = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit > max) max = digit;
        if (digit < min) min = digit;
        num /= 10;
    }
    printf("Smallest: %d, Largest: %d\n", min, max);
    return 0;
}

