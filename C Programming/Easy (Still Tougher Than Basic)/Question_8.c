// 8. Input numbers until negative, find max and min
#include <stdio.h>
int main() {
    int num, max = -1e9, min = 1e9;
    while (1) {
        printf("Enter number (negative to stop): ");
        scanf("%d", &num);
        if (num < 0) break;
        if (num > max) max = num;
        if (num < min) min = num;
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}

