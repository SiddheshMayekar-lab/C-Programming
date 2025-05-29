
// 10. Clothes size
#include <stdio.h>
int main() {
    int chest;
    printf("Enter chest size: ");
    scanf("%d", &chest);
    if (chest < 34)
        printf("Small\n");
    else if (chest < 38)
        printf("Medium\n");
    else if (chest < 42)
        printf("Large\n");
    else
        printf("Extra Large\n");
    return 0;
}
