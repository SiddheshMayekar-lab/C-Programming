// 8. Find LCM of two numbers using loop
#include <stdio.h>
int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }
    return 0;
}
