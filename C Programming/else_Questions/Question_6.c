
// 6. Divisible by 3
#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num % 3 == 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
