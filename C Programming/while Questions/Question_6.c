
// 6. Calculate factorial of a number
#include <stdio.h>
int main() {
    int num, i = 1;
    unsigned long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    while (i <= num) {
        fact *= i;
        i++;
    }
    printf("Factorial = %llu\n", fact);
    return 0;
}
