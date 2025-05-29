#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int found = 0;
    for (int size = 2; size <= (n < m ? n : m); size++) {
        for (int i = 0; i <= n - size; i++) {
            for (int j = 0; j <= m - size; j++) {
                int valid = 1;
                for (int x = 0; x < size; x++)
                    for (int y = 0; y < size; y++)
                        if (a[i + x][j + y] != 1) valid = 0;
                if (valid) { found = 1; break; }
            }
            if (found) break;
        }
        if (found) break;
    }

    if (found)
        printf("Square of 1s found.\n");
    else
        printf("No square of 1s.\n");
    return 0;
}
