#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == temp;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }
    return 0;
}
