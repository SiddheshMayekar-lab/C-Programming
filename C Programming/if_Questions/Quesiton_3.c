// 3. Eligible to vote
#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible to vote\n");
    return 0;
}
