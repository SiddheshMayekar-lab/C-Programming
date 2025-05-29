
// 9. Print numbers in reverse but skip multiples of 5
#include <stdio.h>
int main() {
    for (int i = 100; i >= 1; i--) {
        if (i % 5 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

