
// 7. Print multiplication table of a given number
#include <stdio.h>
int main() {
    int num, i = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
