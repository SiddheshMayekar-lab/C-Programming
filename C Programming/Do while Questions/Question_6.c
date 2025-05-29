
// 6. Generate random number until it matches target (simulate)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int target = 7, num;
    srand(time(0));
    do {
        num = rand() % 10 + 1;
        printf("Generated: %d\n", num);
    } while (num != target);
    printf("Matched target %d\n", target);
    return 0;
}
