// 3. Sum numbers until the user enters 0
#include <stdio.h>
int main() {
    int num, sum = 0;
    do {
        printf("Enter number (0 to stop): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    printf("Sum = %d\n", sum);
    return 0;
}

