// 6. Check if two numbers have same digits (e.g., 123 and 321)
#include <stdio.h>
int main() {
    int freq1[10] = {0}, freq2[10] = {0};
    int n1, n2, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    while (n1 > 0) {
        freq1[n1 % 10]++;
        n1 /= 10;
    }
    while (n2 > 0) {
        freq2[n2 % 10]++;
        n2 /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Digits do not match\n");
            return 0;
        }
    }
    printf("Same digits in different order\n");
    return 0;
}

