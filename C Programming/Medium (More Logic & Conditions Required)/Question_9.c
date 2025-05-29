#include <stdio.h>

int main() {
    for (int h = 0; h <= 0; h++) {
        for (int m = 0; m <= 0; m++) {
            for (int s = 0; s < 10; s++) {
                printf("%02d:%02d:%02d\n", h, m, s);
            }
        }
    }
    return 0;
}
