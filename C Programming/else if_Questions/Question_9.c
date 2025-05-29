
// 9. Assign rank
#include <stdio.h>
int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score >= 90)
        printf("Rank 1\n");
    else if (score >= 75)
        printf("Rank 2\n");
    else if (score >= 60)
        printf("Rank 3\n");
    else
        printf("No Rank\n");
    return 0;
}
