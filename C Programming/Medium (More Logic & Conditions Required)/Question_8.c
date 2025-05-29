#include <stdio.h>

int main() {
    int n, steps = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 1) {
        printf("%d ", n);
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        steps++;
    }
    printf("1\nSteps: %d\n", steps);
    return 0;
}
