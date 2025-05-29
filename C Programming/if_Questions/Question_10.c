// 10. Website access by age
#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age > 13)
        printf("Access granted\n");
    return 0;
}