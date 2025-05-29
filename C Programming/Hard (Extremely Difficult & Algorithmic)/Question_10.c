#include <stdio.h>

int main() {
    int freq[10] = {0}, num;
    printf("Enter 9 digits (1-9): ");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num);
        if (num < 1 || num > 9 || freq[num]) {
            printf("Invalid Sudoku row.\n");
            return 0;
        }
        freq[num] = 1;
    }
    printf("Valid Sudoku row.\n");
    return 0;
}
