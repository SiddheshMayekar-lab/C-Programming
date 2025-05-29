#include <stdio.h>

int sumSquares(int n) {
    int sum = 0;
    while (n) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int slow = n, fast = n;
    do {
        slow = sumSquares(slow);
        fast = sumSquares(sumSquares(fast));
    } while (slow != fast);

    if (slow == 1)
        printf("Happy number.\n");
    else
        printf("Loop detected. Not a happy number.\n");

    return 0;
}
