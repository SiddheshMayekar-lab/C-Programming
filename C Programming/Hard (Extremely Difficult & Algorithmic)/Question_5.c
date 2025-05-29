#include <stdio.h>

char board[3][3];

void initBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
}

int checkWin(char p) {
    for (int i = 0; i < 3; i++)
        if ((board[i][0]==p && board[i][1]==p && board[i][2]==p) ||
            (board[0][i]==p && board[1][i]==p && board[2][i]==p))
            return 1;
    if ((board[0][0]==p && board[1][1]==p && board[2][2]==p) ||
        (board[0][2]==p && board[1][1]==p && board[2][0]==p))
        return 1;
    return 0;
}

int main() {
    int row, col, turns = 0;
    char player = 'X';
    initBoard();

    while (turns < 9) {
        printBoard();
        printf("Player %c, enter row and column (0-2): ", player);
        scanf("%d%d", &row, &col);
        if (board[row][col] == ' ') {
            board[row][col] = player;
            if (checkWin(player)) {
                printBoard();
                printf("Player %c wins!\n", player);
                return 0;
            }
            player = (player == 'X') ? 'O' : 'X';
            turns++;
        } else {
            printf("Cell taken!\n");
        }
    }
    printBoard();
    printf("Draw!\n");
    return 0;
}
