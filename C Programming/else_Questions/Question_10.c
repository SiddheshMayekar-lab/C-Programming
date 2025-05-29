
// 10. Login verification
#include <stdio.h>
#include <string.h>
int main() {
    char input[10];
    printf("Enter login: ");
    scanf("%s", input);
    if (strcmp(input, "user") == 0)
        printf("Welcome\n");
    else
        printf("Try Again\n");
    return 0;
}