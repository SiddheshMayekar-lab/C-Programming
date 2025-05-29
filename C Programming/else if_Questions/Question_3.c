
// 3. Compare two numbers
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("First is greater\n");
    else if (b > a)
        printf("Second is greater\n");
    else
        printf("Both are equal\n");
    return 0;
}
