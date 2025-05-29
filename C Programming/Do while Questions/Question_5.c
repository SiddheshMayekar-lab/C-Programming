
// 5. Print a pattern of stars until n is reached
#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Enter number of stars: ");
    scanf("%d", &n);
    do {
        printf("*");
        i++;
    } while (i <= n);
    printf("\n");
    return 0;
}
