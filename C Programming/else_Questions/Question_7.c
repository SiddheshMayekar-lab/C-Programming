
// 7. Positive check
#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positive\n");
    else
        printf("Not Positive\n");
    return 0;
}
