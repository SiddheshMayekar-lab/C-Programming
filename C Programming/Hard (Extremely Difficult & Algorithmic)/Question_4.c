#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];
    float balance = 0;
    int choice, loggedIn = 0;

    printf("Create username: ");
    scanf("%s", user);
    printf("Create password: ");
    scanf("%s", pass);

    while (!loggedIn) {
        char u[20], p[20];
        printf("\nLogin - Username: ");
        scanf("%s", u);
        printf("Password: ");
        scanf("%s", p);
        if (strcmp(u, user) == 0 && strcmp(p, pass) == 0) {
            loggedIn = 1;
        } else {
            printf("Login failed.\n");
        }
    }

    do {
        printf("\n1.Balance 2.Deposit 3.Withdraw 4.Exit\nChoice: ");
        scanf("%d", &choice);
        float amt;
        switch (choice) {
            case 1: printf("Balance: %.2f\n", balance); break;
            case 2: printf("Amount to deposit: "); scanf("%f", &amt); balance += amt; break;
            case 3: printf("Amount to withdraw: "); scanf("%f", &amt); 
                    if (amt <= balance) balance -= amt; 
                    else printf("Insufficient funds.\n"); 
                    break;
        }
    } while (choice != 4);

    return 0;
}
