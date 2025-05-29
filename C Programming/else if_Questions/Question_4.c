
// 4. Classify age group
#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12)
        printf("Child\n");
    else if (age >= 13 && age <= 17)
        printf("Teen\n");
    else
        printf("Adult\n");
    return 0;
}
