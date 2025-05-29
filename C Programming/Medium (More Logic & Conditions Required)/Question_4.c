#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i*i <= n; i++) {
        int j = sqrt(n - i*i);
        if (i*i + j*j == n) {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("%d = %d^2 + %d^2\n", n, i, (int)sqrt(n - i*i));
    else
        printf("Cannot be expressed as sum of two squares.\n");
    return 0;
}
