
// 8. Check if number is palindrome
#include <stdio.h>
int main() {
    int num, rev = 0, temp;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    if (rev == num)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
