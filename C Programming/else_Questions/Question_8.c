
// 8. Score pass
#include <stdio.h>
int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score > 50)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}

