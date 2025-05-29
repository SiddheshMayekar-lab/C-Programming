// 2. Print a menu until the user chooses to exit
#include <stdio.h>
int main() {
    int choice;
    do {
        printf("Menu:\n1. Option 1\n2. Option 2\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
    } while (choice != 3);
    printf("Exited menu\n");
    return 0;
}

