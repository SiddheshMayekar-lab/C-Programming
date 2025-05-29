// 9. Print powers of 2 up to a limit
#include <stdio.h>
int main() {
    int limit, i = 0, val = 1;
    printf("Enter limit: ");
    scanf("%d", &limit);
    do {
        printf("%d ", val);
        val *= 2;
        i++;
    } while (val <= limit);
    printf("\n");
    return 0;
}
