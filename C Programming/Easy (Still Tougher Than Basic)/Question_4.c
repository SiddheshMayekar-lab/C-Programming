// 4. Reverse number and check divisibility by 7
#include <stdio.h>
int main() {
    int num, rev = 0, temp;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("Reversed = %d\n", rev);
    if (rev % 7 == 0)
        printf("Reversed number divisible by 7\n");
    else
        printf("Not divisible by 7\n");
    return 0;
}

