#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];
    int attempt = 0;
    while (attempt < 3) {
        printf("Username: ");
        scanf("%s", user);
        printf("Password: ");
        scanf("%s", pass);
        if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0) {
            printf("Login successful!\n");
            return 0;
        } else {
            printf("Incorrect. Attempts left: %d\n", 2 - attempt);
            attempt++;
        }
    }
    printf("Account locked.\n");
    return 0;
}
