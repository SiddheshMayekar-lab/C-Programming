
// 9. Find sum of digits of a number
#include <stdio.h>
int main() {
    int num, sum = 0, temp;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
