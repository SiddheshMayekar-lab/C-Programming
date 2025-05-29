
// 8. Temperature above boiling
#include <stdio.h>
int main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);
    if (temp > 100)
        printf("Above boiling point\n");
    return 0;
}
