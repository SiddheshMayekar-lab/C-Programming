#include <stdio.h>

int main() {
    int grid[5][5], next[5][5];
    printf("Enter 5x5 grid (0 or 1):\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &grid[i][j]);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            int live = 0;
            for (int x = i-1; x <= i+1; x++)
                for (int y = j-1; y <= j+1; y++)
                    if (x >= 0 && y >= 0 && x < 5 && y < 5 && !(x==i && y==j))
                        live += grid[x][y];

            next[i][j] = grid[i][j];
            if (grid[i][j] == 1 && (live < 2 || live > 3))
                next[i][j] = 0;
            if (grid[i][j] == 0 && live == 3)
                next[i][j] = 1;
        }

    printf("Next generation:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", next[i][j]);
        printf("\n");
    }
    return 0;
}
