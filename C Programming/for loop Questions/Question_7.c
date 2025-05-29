// 7. Print all prime numbers between 1 to 100
#include <stdio.h>
int main() {
    int isPrime;
    for (int num = 2; num <= 100; num++) {
        isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d ", num);
    }
    printf("\n");
    return 0;
}

