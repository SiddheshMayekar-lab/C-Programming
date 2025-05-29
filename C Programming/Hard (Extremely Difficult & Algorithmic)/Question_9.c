#include <stdio.h>

int main() {
    int n, freq[10] = {0};
    printf("Enter number: ");
    scanf("%d", &n);
    while (n) {
        freq[n % 10]++;
        n /= 10;
    }
    int odd = 0;
    for (int i = 0; i < 10; i++)
        if (freq[i] % 2 != 0)
            odd++;
    if (odd <= 1)
        printf("Can be rearranged into a palindrome.\n");
    else
        printf("Cannot be rearranged into a palindrome.\n");
    return 0;
}
