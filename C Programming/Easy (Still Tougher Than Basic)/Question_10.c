// 10. Input 10 numbers, find one with most even digits
#include <stdio.h>
int main() {
    int num, maxEvenCount = -1, result = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        int count = 0, temp = num;
        while (temp > 0) {
            if ((temp % 10) % 2 == 0) count++;
            temp /= 10;
        }
        if (count > maxEvenCount) {
            maxEvenCount = count;
            result = num;
        }
    }
    printf("Number with most even digits: %d\n", result);
    return 0;
}