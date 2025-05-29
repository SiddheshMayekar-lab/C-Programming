
// 8. Classify temperature
#include <stdio.h>
int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    if (temp < 10)
        printf("Cold\n");
    else if (temp <= 30)
        printf("Warm\n");
    else
        printf("Hot\n");
    return 0;
}
