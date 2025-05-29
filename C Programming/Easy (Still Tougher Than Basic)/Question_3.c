// 3. Check Armstrong number using do while
#include <stdio.h>
#include <math.h>
int main() {
    int num, orig, rem, result = 0, n = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    orig = num;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        n++;
    }
    do {
        rem = num % 10;
        result += pow(rem, n);
        num /= 10;
    } while (num > 0);
    if (result == orig)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}

