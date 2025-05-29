#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int sumDigits(int n) {
    int sum = 0;
    while (n) { sum += n % 10; n /= 10; }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n) && isPrime(sumDigits(n)))
        printf("%d is a Super Prime\n", n);
    else
        printf("%d is NOT a Super Prime\n", n);
    return 0;
}
