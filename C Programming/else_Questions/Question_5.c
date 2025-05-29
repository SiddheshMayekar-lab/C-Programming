
// 5. Rain check
#include <stdio.h>
int main() {
    int rain;
    printf("Is it raining? (1 = Yes / 0 = No): ");
    scanf("%d", &rain);
    if (rain)
        printf("Take umbrella\n");
    else
        printf("No umbrella needed\n");
    return 0;
}
