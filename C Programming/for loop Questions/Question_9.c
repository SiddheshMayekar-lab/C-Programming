
// 9. Count how many numbers between 1 and 100 are divisible by both 3 and 5
#include <stdio.h>
int main() {
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            count++;
    }
    printf("Count = %d\n", count);
    return 0;
}

