
// 8. Simulate ATM menu with options in loop
#include <stdio.h>
int main() {
    int choice, balance = 1000, amount;
    do {
        printf("ATM Menu:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Balance: %d\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                balance += amount;
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%d", &amount);
                if (amount <= balance) balance -= amount;
                else printf("Insufficient balance\n");
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}


