// 4. Validate input: keep asking until number > 0 entered
#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);
    printf("You entered %d\n", num);
    return 0;
}