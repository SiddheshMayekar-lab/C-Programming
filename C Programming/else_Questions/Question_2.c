
// 2. Login status
#include <stdio.h>
int main() {
    int loggedIn;
    printf("Enter 1 if logged in, else 0: ");
    scanf("%d", &loggedIn);
    if (loggedIn == 1)
        printf("User logged in\n");
    else
        printf("Not logged in\n");
    return 0;
}
